/**
 *   author:  tamim-iqbal
 *   created: 14/04/2025 22:35:16
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
    int a[n];
    int count = 0;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 0)
        {
            count++;
            ans = max(ans, count);
        }
        else count = 0;
        
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



