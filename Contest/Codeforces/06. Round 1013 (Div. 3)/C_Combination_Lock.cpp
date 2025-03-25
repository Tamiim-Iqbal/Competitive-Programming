/**
 *   author:  tamim-iqbal
 *   created: 25/03/2025 20:58:46
**/

// Time Complexity : 
// Space Complexity :

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if(n%2 == 0) cout << "-1\n";
    else
    {
        for(int i = n; i >= 1; i--)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
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