#include <bits/stdc++.h>
 
using namespace std;
#define endl "\n"
#define int long long int
#define F first
#define S second
#define pb push_back
#define si set<int>
#define vi vector<int>
#define pii pair<int, int>
#define vpi vector<pii>
#define vpp vector<pair<int, pii>>
#define mii map<int, int>
#define mpi map<pii, int>
#define spi set<pii>
#define endl "\n"
#define sz(x) ((int)x.size())
#define all(p) p.begin(), p.end()
#define double long double
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define print(a)          \
    for (auto x : a)      \
        cout << x << " "; \
    cout << endl
#define print1(a)    \
    for (auto x : a) \
    cout << x.F << " " << x.S << endl
#define print2(a, x, y)         \
    for (int i = x; i < y; i++) \
        cout << a[i] << " ";    \
    cout << endl
#define scan(a)        \
    for (auto &it : a) \
    {                  \
        cin >> it;     \
    }
 
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cerr << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
 
const int N = 200005;

 
void solve()
{
    int x,y;
    cin >> x >> y;
    for(int i = 0; i < 31; i++){
        if((x&(1 << i)) != (y & (1 << i))){
            //bug(i);
            cout << (1LL << i) << "\n";
            return;
        }
    }
}
 
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t = 1;
    cin >> t;
    while (t--)
        solve();
 
    return 0;
}