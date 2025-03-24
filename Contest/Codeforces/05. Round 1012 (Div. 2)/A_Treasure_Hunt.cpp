/**
 *   author:  tamim-iqbal
 *   created: 24/03/2025 22:33:06
**/


#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y, a;
    cin >> x >> y >> a;
    
    if(a % (x + y) >= x) cout << "YES\n";
    else cout << "NO\n";
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