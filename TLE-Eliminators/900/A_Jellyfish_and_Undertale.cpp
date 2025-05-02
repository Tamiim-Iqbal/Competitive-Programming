/**
 *   author:  tamim-iqbal
 *   created: 03/05/2025 04:14:36
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

void solve()
{
    ll a, b, n; cin >> a >> b >> n;
    ll arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    ll ans = b;
    for(int i = 0; i < n; i++)
    {
        ans += min(arr[i], a - 1);
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



