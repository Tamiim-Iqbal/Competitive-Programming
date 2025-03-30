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
    
    vector<int>a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());

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
