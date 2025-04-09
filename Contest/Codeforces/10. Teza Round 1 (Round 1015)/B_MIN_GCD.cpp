/**
 *   author:  tamim-iqbal
 *   created: 10/04/2025 02:40:00
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
#define endl "\n";
 
using ll = long long;
using vl = vector<ll>;

void solve()
{
    int n; cin >> n;
    vl a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    ll mn_idx = min_element(a.begin(), a.end()) - a.begin();   // minimum element index

    ll g = 0;

    for (int i = 0; i < n; i++)
    {
        if (i != mn_idx &&  a[i] % a[mn_idx] == 0)
        {
            g = gcd(g, a[i]);
        }
    }
    cout << (g == a[mn_idx] ? "Yes" : "No") << endl;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

