/**
 *   author:  TAMIM IQBAL
 *   created: 09/03/2025 08:25:38
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        
        if(a[0] == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}