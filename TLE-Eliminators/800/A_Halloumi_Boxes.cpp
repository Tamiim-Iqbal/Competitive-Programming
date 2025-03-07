/**
 *   author:  TAMIM IQBAL
 *   created: 07/03/2025 15:55:31
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];

        if(is_sorted(a,a+n) || k >= 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}