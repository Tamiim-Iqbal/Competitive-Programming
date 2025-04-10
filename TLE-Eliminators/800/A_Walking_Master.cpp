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
    ll a, b, c, d; cin >> a >> b >> c >> d;
    if(a == c && b == d) 
    {
        cout << 0 << endl;
        return;
    }
    if(b == d) 
    {
        cout << abs(a) + abs(c)<< endl;
        return;
    }
    if(abs(a) > abs(d))
    {
        cout << -1 << endl;
        return;
    }
    if(a == b)
    {
        cout << d + 1 << endl;
        return;
    }
    else
    {
        cout << abs(b - d) + 2 << endl;
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



