/**
 *   author:  TAMIM IQBAL
 *   created: 08/03/2025 17:11:26
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;

        int pre = 0, post = 0;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a, a+n);

        if(n == 2) cout << "Yes" << endl;
        else if(n % 2 == 0)
        {
            for (int i = 0; i<n; i++)
            {
               if(i < n/2) pre += a[i];
               else post += a[i];
            }
            if(pre == post) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        else
        {
            for (int i = 0; i<n; i++)
            {
               if(i <= n/2) pre += a[i];
               else post += a[i];
            }
            if(pre == post) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}