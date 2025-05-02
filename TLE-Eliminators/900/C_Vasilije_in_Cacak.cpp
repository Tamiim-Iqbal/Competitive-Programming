/**
 *   author:  tamim-iqbal
 *   created: 03/05/2025 03:15:21
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
    ll n, k, x; cin >> n >> k >> x;

    ll min_sum = k * (k + 1) / 2;
    ll max_sum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;

    if (x >= min_sum && x <= max_sum) yes else no
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



