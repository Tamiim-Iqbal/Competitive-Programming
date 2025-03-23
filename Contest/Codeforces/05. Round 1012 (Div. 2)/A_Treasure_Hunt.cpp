/**
 *   author:  TAMIM IQBAL
 *   created: 23/03/2025 13:19:09
**/


#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y, a;
    cin >> x >> y >> a;

    //2 days per cycle
    long long cycle_depth = x + y;

    // number of cycles needed
    long long k = (a + 0.5) / cycle_depth;

    // Total depth after k cycles
    long long total_depth = k * cycle_depth;


    if (total_depth + x > a + 0.5)
    {
        cout << "NO" << endl;
    }
    
    else
    {
        cout << "YES" << endl;
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