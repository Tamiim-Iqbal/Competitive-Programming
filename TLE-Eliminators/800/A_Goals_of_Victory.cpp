/**
 *   author:  TAMIM IQBAL
 *   created: 19/03/2025 23:36:37
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
        int n, sum = 0;
        cin >> n;
        int a[n-1];
        for(int i = 0; i < n-1; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        cout<<sum*(-1)<<endl;
    }
        
    return 0;
}