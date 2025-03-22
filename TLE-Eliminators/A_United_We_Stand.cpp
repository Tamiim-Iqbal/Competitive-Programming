
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<long long> a(n);
    vector<long long> b, c;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long mx = *max_element(a.begin(), a.end());
    //cout << mx << endl; 

    for(int i = 0; i < n; i++)
    {
        if(a[i] != mx) b.push_back(a[i]);
        else c.push_back(a[i]);
    }

    if(b.size() == 0)  // one element is there, that is the maximum element and placed in c, so b is empty
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << b.size() << " " << c.size() << endl;
        for(int i = 0; i < b.size(); i++) cout << b[i] << " ";
        
        cout << endl;
        for(int i = 0; i < c.size(); i++) cout << c[i] << " ";
        cout << endl;
    }
    
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