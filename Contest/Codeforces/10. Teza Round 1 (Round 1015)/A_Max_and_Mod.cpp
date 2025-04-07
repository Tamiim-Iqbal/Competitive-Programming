/**
 *   author:  tamim-iqbal
 *   created: 07/04/2025 19:10:58
**/

// Time Complexity : O(n)
// Space Complexity : O(n)

#define _Alignof alignof       // ignore this : its just for the compiler

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
    if(n % 2 == 0) cout << -1 << endl;
    else
    {
        cout << n << " ";
        for(int i = 1; i < n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
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
