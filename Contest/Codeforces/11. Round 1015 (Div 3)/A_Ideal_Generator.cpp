/**
 *   author:  tamim-iqbal
 *   created: 08/04/2025 21:22:37
**/

// Time Complexity : O(1)
// Space Complexity : O(1)

#define _Alignof alignof       // ignore this : its just for the compiler

#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define Dpos(n) fixed << setprecision(n)
 
using ll = long long;
using vl = vector<ll>;

void solve()
{
    int n; cin >> n;
    if(n % 2 == 0)
    {
        no;
    }
    else
    {
        yes;
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

