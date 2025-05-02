/**
 *   author:  tamim-iqbal
 *   created: 02/05/2025 21:30:49
**/

#define _Alignof alignof       // ignore this : its just for the compiler
#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define Dpos(n) fixed << setprecision(n)
#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int dx[4] = {-1, 1, -1, 1}, dy[4] = {1, 1, -1, -1}; // diagonal moves

void solve()
{
    ll a, b; cin >> a >> b;
    ll x_king, y_king; cin >> x_king >> y_king;
    ll x_queen, y_queen; cin >> x_queen >> y_queen;

    set<pii> king_hits, queen_hits;

    for(int i = 0; i < 4; i++)
    {
        king_hits.insert({x_king + dx[i]*a, y_king + dy[i]*b});
        king_hits.insert({x_king + dx[i]*b, y_king + dy[i]*a});

        queen_hits.insert({x_queen + dx[i]*a, y_queen + dy[i]*b});
        queen_hits.insert({x_queen + dx[i]*b, y_queen + dy[i]*a});
    }

    int ans = 0;
    for(auto pos : king_hits)
    {
        if(queen_hits.find(pos) != queen_hits.end())
        {
            ans++;
        }
    }
    cout << ans << endl;
}

int main() 
{
    ios::sync_with_stdio(false);  cin.tie(NULL);

    int t;  cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}



