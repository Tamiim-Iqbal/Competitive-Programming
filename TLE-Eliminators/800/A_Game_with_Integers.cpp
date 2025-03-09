/**
 *   author:  TAMIM IQBAL
 *   created: 09/03/2025 08:18:39
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
        if(n % 3 == 0) cout << "Second"<<endl;
        else cout << "First"<<endl;
    }
    
    return 0;
}