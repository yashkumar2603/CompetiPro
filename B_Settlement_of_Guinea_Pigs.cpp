

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

// if the difference between  the number of M and F pigs is a multiple of 2 then we will need an extra aviary.
// else the normal numebr of aviaries needed is  - (M +F)/2.
// if genders remain undetermined, we will need (M+F) numbers of Aviaries, bascically one for each.
// keep a pointer at the first 2 we get and anither  one at the next 2 we get, then determine for all the ones in between.

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        return 0;
}