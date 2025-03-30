/**
 *   author:  tamim-iqbal
 *   created: 30/03/2025 19:08:22
**/

// Time Complexity : O(n)
// Space Complexity : O(n)

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

#define endl "\n"
#define ff first
#define ss second

void solve()
{
    int n; cin >> n;
    string a, b; cin >> a >> b;

    int f1 = 0, f2 = 0;

    for(int i = 0; i < n; i++)
    {
        if(i % 2)
        {
            if(a[i] == '1') f2--;
            if(b[i] == '0') f1++; 
        }
        else
        {
            if(a[i] == '1') f1--;
            if(b[i] == '0') f2++;
        }
    }

    if(f1 >= 0 && f2 >= 0) cout << "YES" << endl;
    else cout << "NO" << endl;

}

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
