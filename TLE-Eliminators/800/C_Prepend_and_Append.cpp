/**
 *   author:  tamim-iqbal
 *   created: 22/04/2025 20:32:00
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
    string s; cin >> s;

    int left = 0, right = n - 1, ans = n;

    while(left <= right)
    {
        if(s[left] != s[right])
        {
            ans -= 2;
        }
        else
        {
            break;
        }
        left++; right--;
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



