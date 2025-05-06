/**
 *   author:  tamim-iqbal
 *   created: 05/05/2025 21:16:25
**/
 
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
    ll n, k; cin >> n >> k;
    vi a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    ll sum = accumulate(a.begin(), a.end(), 0LL);
    sort(a.begin(), a.end());

    a[n - 1]--;          
    sort(a.begin(), a.end());    //if freq of max > 1
    
    if(a[n - 1] - a[0] > k || sum % 2 == 0) cout << "Jerry" << endl;
    else cout << "Tom" << endl;
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