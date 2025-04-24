/**
 *   author:  tamim-iqbal
 *   created: 24/04/2025 20:38:07
**/

// Time Complexity : 
// Space Complexity :

#define _Alignof alignof       // ignore this : its just for the compiler
#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define Dpos(n) fixed << setprecision(n)
#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    int zero = 0, one = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '0') zero++;
        else one++;
    }

    int c = (one + 1) * zero;
    int c1 = (one * (one - 1));
    int ans = c + c1;
    cout << ans << endl;
}

int main() 
{
    ios::sync_with_stdio(false);  cin.tie(NULL);

    int t;  cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}



