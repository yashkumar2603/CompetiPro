// Link :
#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

const int N = 1e5 + 10;
#define nl "\n"

#define Long long long
#define Program main
#define Signed signed
#define Pair pair
#define Vector vector

map<Pair<Long, Long>, Long> Bridges;
Long TimeCounter;

Pair<Long, Long> FindArticulationPoints(Long index, Vector<Vector<Long>> &graph,
                                        Vector<Long> &DiscoveryTime,
                                        Long parent) {
    if (DiscoveryTime[index] != -1) {
        return {DiscoveryTime[index], 0};
    }

    TimeCounter++;
    DiscoveryTime[index] = TimeCounter;

    Long Result = DiscoveryTime[index], SubtreeSize = 1;

    for (auto &neighbor : graph[index]) {
        if (neighbor == parent)
            continue;
        Pair<Long, Long> P =
            FindArticulationPoints(neighbor, graph, DiscoveryTime, index);
        Long X = P.first, Y = P.second;

        SubtreeSize += Y;

        if (X <= DiscoveryTime[index]) {
            Result = min(Result, X);
        } else {
            Bridges[{index, neighbor}] = Y;
        }
    }

    DiscoveryTime[index] = Result;
    return {Result, SubtreeSize};
}

void SolveCase() {
    Long Nodes, Edges;
    cin >> Nodes >> Edges;

    Vector<Vector<Long>> AdjacencyList(Nodes);

    while (Edges--) {
        Long U, V;
        cin >> U >> V;
        U--;
        V--;
        AdjacencyList[U].push_back(V);
        AdjacencyList[V].push_back(U);
    }
    Bridges.clear();
    TimeCounter = 0;
    Vector<Long> Heights(Nodes, -1);
    Pair<Long, Long> P = FindArticulationPoints(0, AdjacencyList, Heights, -1);

    Long Answer = Nodes * (Nodes - 1) / 2;
    for (auto &Val : Bridges) {
        Long L = Val.second, R = Nodes - Val.second;
        Answer = min(Answer, (L * (L - 1) + (R * (R - 1))) / 2);
    }

    cout << Answer << endl;
}

Signed Program() {
    Long TestCases;
    cin >> TestCases;
    while (TestCases--) {
        SolveCase();
    }
    return 0;
}
