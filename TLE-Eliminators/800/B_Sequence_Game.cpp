/**
 *   author:  TAMIM IQBAL
 *   created: 24/03/2025 16:09:32
**/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> b(n), a;
    for (int i = 0; i < n; i++) cin >> b[i];

    a.push_back(b[0]);

    for (int i = 1; i < n; i++) 
    {
        if(b[i] >= b[i-1])
        {
            a.push_back(b[i]);
        } 
        else
        {
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }

    cout << a.size() << endl;
    for (auto it : a) cout << it << " ";
    cout << endl;
    
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