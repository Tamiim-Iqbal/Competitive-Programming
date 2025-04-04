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
    vector<int> a(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i];
    }
    
    ll sum = accumulate(a.begin(), a.end(), 0LL);

    if (x > k * sum) 
    {
        cout << 0 << endl;
        return;
    }

    int rem = x % sum;
    int res = x / sum;

    if(rem == 0) 
    {
        res--;
        rem = sum;
    }

    int ans = n * k - res * n;
    int sub = 0;

    for (int i = n - 1; i >= 0; i--) 
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
