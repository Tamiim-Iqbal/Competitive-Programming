/**
 *   author:  tamim-iqbal
 *   created: 04/05/2025 22:32:48
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
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    if(n & 1)    // odd
    {
        cout << 4 << endl;
        cout << 1 << " " << n - 1 << endl;
        cout << 1 << " " << n - 1 << endl;
        cout << n - 1<< " " << n << endl;
        cout << n - 1<< " " << n << endl;
        
    }
    else 
    {
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
    }
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



