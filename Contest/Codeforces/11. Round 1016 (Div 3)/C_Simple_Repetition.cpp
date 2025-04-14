/**
 *   author:  tamim-iqbal
 *   created: 10/04/2025 02:29:29
**/

// Time Complexity : sqrt(n)
// Space Complexity : O(1)

#define _Alignof alignof       // ignore this : its just for the compiler
#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define Dpos(n) fixed << setprecision(n)
#define endl "\n";

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

bool isPrime(ll n)
{
    for(ll i = 2 ; i <= sqrtl(n); i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

void solve()
{
    ll x, k; cin >> x >> k;
    
    if (x == 1 && k == 2) yes 
    else if (x == 1 || k > 1) no
    else 
    {
        if(isPrime(x)) yes else no
    }
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



