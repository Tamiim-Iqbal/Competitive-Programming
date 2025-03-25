/**
 *   author:  tamim-iqbal
 *   created: 25/03/2025 21:03:34
**/

// Time Complexity : O(n log n)
// Space Complexity : O(n)

#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n; long long x;
    cin >> n >> x;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.rbegin(), a.rend());          // descending order

    int team_count = 0;
    int team_size = 0;

    for (int i = 0; i < n; i++) 
    {
        team_size++;         
        if (a[i] * team_size >= x) 
        { 
            team_count++;                // strong 
            team_size = 0;               // new team
        }
    }

    cout << team_count << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
