#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

// Debug, remove before submit.
/*void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr<<' '<< H; dbg_out(T...); }
#define dbg(...) cerr << '(' << #__VA_ARGS__<<'):', dbg_out(__VA_ARGS__)*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    vector<int> num;
    num.push_back(1);
    for (int i = 0; i < n - 1; i++)
    {
        num.push_back(0);
    }
    int t_sq = t * t;
    int digit = 0;
    int i = 0;
    while (t_sq != 0)
    {
        digit = t_sq % 10;
        t_sq /= 10;
        num[n - i] += digit;
        i++;
    }
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i];
    }
}

// BRUTE FORCE SOLUTION - (NIGGER)

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x,y,n,i,t;
    while(cin>>n>>t){
        if(n==1&&t==10)
            cout<<"-1\n";
        else if(n>=2&&t==10)
        {
            for(i=1;i<n;i++){
                cout<<"1";
            }
            cout<<"0\n";
        }
        else
        {
            for(i=1;i<=n;i++){
                cout<<t;
            }
            cout<<endl;
        }
    }
    return 0;
}*/