/**
 *   author:  tamim-iqbal
 *   created: 06/04/2025 20:28:37
**/

// Time Complexity : O(n)
// Space Complexity : O(n)

#define _Alignof alignof
#include<bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

#define endl "\n"
#define ff first
#define ss second

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    
    ll sum = accumulate(a.begin(), a.end(), 0LL);

    if (x > k * sum) 
    {
        cout << 0 << endl;
        return;
    }

    ll rem = x % sum;
    ll res = x / sum;

    if(rem == 0) 
    {
        res--;
        rem = sum;
    }

    ll ans = n * k - res * n;
    ll sub = 0;

    for (ll i = n - 1; i >= 0; i--) 
    {
        sub += a[i];
        if (sub >= rem) 
        {
            break;
        }
        ans--;
    }
    cout << ans << endl;
}

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
