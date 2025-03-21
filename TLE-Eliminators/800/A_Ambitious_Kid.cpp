/**
 *   author:  TAMIM IQBAL
 *   created: 21/03/2025 14:11:00
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    int mn = INT_MAX;
    while (n--)
    {
        int a; cin >> a;
        a = abs(a);
        mn = min(mn, a);
    }
    cout << mn << endl;
    
    return 0;
}