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

void solve()
{
    int n; cin >> n;
    int a[n]; 
    for(int i = 0; i < n; i++) cin >> a[i];
    int mn = INT_MAX;

    bool ok = is_sorted(a, a+n);
    if(!ok)
    {
        cout << 0 << endl;
        return;
    }

    for(int i = 0; i < n; i++)
    {
        int sub = abs(a[i]-a[i+1]);
        mn = min(mn, sub);
    }
    int ans = (mn / 2) + 1;
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



