/**
 *   author:  tamim-iqbal
 *   created: 24/03/2025 23:36:42
**/

// Time Complexity : O(n * m (n + m))
// Space Complexity : O(n * m)

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m; cin >> n >> m;

    vector<string> a(n);     // cause input as a line of string of numbers

    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == '0')
            {
                continue;
            }
            
            // a[i][j] == '1'
            // check if there is any '0' in the same row (i)
            bool flag = 1;
            for(int k = 0; k < i; k++)
            {
                if(a[k][j] == '0')
                {
                    flag = 0;
                    break;
                }
            }

            if(flag) continue;      //means i can push the ball from left

            flag = 1;
            for(int k = 0; k < j; k++)
            {
                if(a[i][k] == '0')
                {
                    flag = 0;
                    break;
                }
            }

            if(!flag)               // means i can't push the ball from top as well as left
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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