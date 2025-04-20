/**
 *   author:  tamim-iqbal
 *   created: 20/04/2025 20:21:35
**/

// Time Complexity : O(n log n)
// Space Complexity : O(n)

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
    ll n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    map<ll, ll> mp;
    for(int i = 0; i < n; i++)
    {
        mp[a[i]]++;    // log(n)
    }

    if(mp.size() >= 3) no
    else
    {
        ll freq1 = mp.begin()->second;
        ll freq2 = (mp.rbegin())->second;

        if(freq1 == freq2) yes
        else if (n % 2 == 1 && abs(freq1 - freq2) == 1) yes
        else no
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



