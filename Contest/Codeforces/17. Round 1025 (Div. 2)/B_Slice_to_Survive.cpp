/**
 *   author:  tamim-iqbal
 *   created: 17/05/2025 21:35:51
**/

#define _Alignof alignof // ignore this : its just for the compiler
#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"
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

// the number of divisions needed to reduce x to 1 cell
ll Count(ll x) 
{
    if (x <= 1) return 0;
    ll count = 0;
    --x;
    while (x > 0) 
    {
        x = x / 2;
        count++;
    }
    return count;
}

void solve() 
{
    ll n, m, a, b;
    cin >> n >> m >> a >> b;

    ll min_rows = min(a, n - a + 1);
    ll min_cols = min(b, m - b + 1);

    // Try both ways:
    ll row_cut = 1 + Count(min_rows) + Count(m);
    ll col_cut = 1 + Count(min_cols) + Count(n);

    cout << min(row_cut, col_cut) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}