// Time Complexity : O(n)
// Space Complexity : O(1)

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
    int n, k, x; cin >> n >> k >> x;

    if( x != 1)
    {
        yes
        cout << n << endl;
        for(int i = 1; i <= n; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
        return;
    }

    if (k == 1 || (k >= 2 && n % 2 == 1)) no
    else
    {
        yes
        if(n % 2 == 0) 
        {
            cout << n / 2 << endl;
            for(int i = 0; i < n / 2; i++)
            {
                cout << 2 << " ";
            }
            cout << endl;
        }
        else
        {
            cout << (n - 3) / 2 + 1 << endl;
            for(int i = 0; i < (n - 3) / 2; i++)
            {
                cout << 2 << " ";
            }
            cout << 3 << endl;
        }
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



