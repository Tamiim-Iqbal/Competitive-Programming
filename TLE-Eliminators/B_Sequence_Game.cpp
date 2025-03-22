
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    a.push_back(b[0]);

    for (int i = 1; i < n; i++) 
    {
        if(b[i-1] >= b[i])
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