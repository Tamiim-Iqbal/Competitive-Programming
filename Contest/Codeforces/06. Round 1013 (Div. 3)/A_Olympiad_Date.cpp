/**
 *   author:  tamim-iqbal
 *   created: 27/03/2025 20:30:24
**/

// Time Complexity : O(t * n)
// Space Complexity : O(1)

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n; 

    int freq[10] = {};
    bool flag = false;

    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        freq[x]++;
        if(!flag && freq[0] >= 3 && freq[1] >= 1 && freq[2] >= 2 && freq[3] >= 1 && freq[5] >= 1)
        {
            cout << i + 1 << "\n";
            flag = true;
        }
    }

    if(!flag) cout << 0 << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        solve();   
    }
    return 0;
}