/**
 *   author:  tamim-iqbal
 *   created: 09/04/2025 00:13:26
**/

// Time Complexity : O(n)
// Space Complexity : O(n)

#define _Alignof alignof       // ignore this : its just for the compiler
#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define Dpos(n) fixed << setprecision(n)
#define endl "\n";

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define f(start, end) for(int i = start; i < end; i++)
#define fe(end, e) for(int i = end - 1; i >= e; i--)
#define fl(start, end) for(ll i = start; i < end; i++)

void solve()
{
    string s; cin >> s;
    int n = s.size();

    int last_nz = 0;
    int ans = n - 1;

    fe(n, 0)
    {
        if(s[i] != '0')
        {
            last_nz = i;
            break;
        }
    }
    
    f(0, last_nz)
    {
        if(s[i] == '0') ans--;
    }
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



