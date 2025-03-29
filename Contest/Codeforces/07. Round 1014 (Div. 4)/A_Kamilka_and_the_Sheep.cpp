/**
 *   author:  tamim-iqbal
 *   created: 29/03/2025 21:44:56
**/

// Time Complexity : O(n)
// Space Complexity : O(1)

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

#define endl "\n";
#define ff first
#define ss second

void solve()
{
    int n; cin >> n;
    int mn = INT_MAX;
    int mx = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mn = min(mn, x);
        mx = max(mx, x);
    }

    int ans = mx - mn;
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
