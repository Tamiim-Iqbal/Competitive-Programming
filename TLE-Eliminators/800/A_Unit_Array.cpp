/**
 *   author:  tamim-iqbal
 *   created: 12/04/2025 00:28:44
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
    int sum = 0;
    int multi = 1;

    vi a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        multi *= a[i];
    }

    int count = 0;
    while(sum < 0 || multi != 1)
    {
        sum += 2;
        multi *= -1;
        count++;
    }
    // cout << sum << multi << count << endl;
    cout << count << endl;
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



