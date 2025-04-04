/**
 *   author:  tamim-iqbal
 *   created: 02/04/2025 21:47:06
**/

// Time Complexity : O(n)
// Space Complexity : O(n)

#define _Alignof alignof    // ignore this : its just for the compiler
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

    int even = 0, odd = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        
        if(a[i] % 2) odd++;
        else even++;
    }

    if(even == 0 || odd == 0) 
    {
        int ans = *max_element(a.begin(), a.end());
        cout << ans << endl;
        return;
    }
    
    ll ans = accumulate(a.begin(), a.end(), 0LL) - (odd - 1);   // sum of all element
    cout << ans << endl;               // ans must be odd & rest of them is reduced to 1 : odd - 1
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
