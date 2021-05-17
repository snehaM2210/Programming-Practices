// Valid Paths
// You are given a tree with N nodes numbered from 1 to N. A set S of nodes is called valid if there exist two vertices u and v (possibly, u=v) such that every node in S lies on the simple path from u to v.

// Count the number of valid sets modulo 109+7. Two sets are different if one node is included in one set and not in the other. If there are multiple pairs (u,v) making a set valid, that set is still only counted once.

// Input
// The first line contains an integer T, the number of test cases. Then the test cases follow.
// Each test case contains N lines of input.
// The first line contains a single integer N, the number of tree nodes.
// Each of the next N−1 lines contains two space-separated integers u and v representing an edge between nodes u and v.
// Output
// For each test case, output in a single line the number of valid sets modulo 109+7.

// Constraints
// 1≤T≤50
// 1≤N≤105
// 1≤u,v≤N
// Sum N over all testcases is at most 5⋅105.
// The given input is a valid tree.
// Subtasks
// Subtask #1 (20 points):

// 1≤T≤10
// 1≤N≤3⋅103
// Subtask #2 (80 points): Original Constraints

// Sample Input
// 2
// 4
// 1 2
// 3 1
// 2 4
// 4
// 1 2
// 2 3
// 2 4
// Sample Output
// 15
// 13
// Explanation
// Test Case 1: Every non-empty set is valid.

// Test Case 2: The valid sets are {1}, {2}, {3}, {4}, {1,2}, {1,3}, {1,4}, {2,3}, {2,4}, {3,4}, {1,2,3}, {1,2,4}, {2,3,4}.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ld long double
#define mod 1000000007
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define f(i, a, b) for (int i = a; i < b; i++)
#define psf push_front
#define ppf pop_front
#define ppb pop_back
#define pb push_back
#define pq priority_queue
#define ff first
#define ss second
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define all(s) s.begin(), s.end()
#define sp(a) setprecision(a)
#define sc(a) scanf("%lld", &a)
#define sz(a) (int)(a.size())
#define pf printf
#define rz resize
#define inf (ll)1e18
#define ub upper_bound
#define lb lower_bound
#define mk make_pair
#define bs binary_search
#define eb emplace_back
const double pi = acos(-1);

ll binpow(ll a, ll b, ll md)
{
    ll res = 1;
    while (b != 0)
    {
        if (b & 1)
            res *= a, res %= md;
        a *= a, a %= md;
        b >>= 1;
    }
    return res % md;
}
ll ans;
vector<vector<int>> v;
vector<ll> dp, tot;
void dfs(int curr, int par)
{
    dp[curr] = 1, tot[curr] = 1;
    ll sum = 0, cnt = 0;
    f(i, 0, sz(v[curr]))
    {
        ll node = v[curr][i];
        if (node != par)
        {
            dfs(node, curr);
            dp[curr] += ((2 * dp[node]) % mod), dp[curr] %= mod, cnt++, tot[curr] += tot[node], tot[curr] %= mod, tot[curr] += dp[node], tot[curr] %= mod;
            sum += dp[node];
        }
    }
    f(i, 0, sz(v[curr]))
    {
        int node = v[curr][i];
        if (node != par)
        {
            tot[curr] += (dp[node] * ((sum - dp[node] + mod) % mod)) % mod;
            tot[curr] %= mod;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p = 1;
    cin >> p;
    f(i, 1, p + 1)
    {
        ans = 0;
        int k;
        cin >> k;
        v.rz(k + 1), dp.rz(k + 1), tot.rz(k + 1);
        f(i, 0, k - 1)
        {
            int s, t;
            cin >> s >> t;
            v[s].pb(t), v[t].pb(s);
        }
        dfs(1, 1);
        ll answer = tot[1] % mod;
        cout << answer << "\n";
        dp.clear(), v.clear(), tot.clear();
    }
    return 0;
}