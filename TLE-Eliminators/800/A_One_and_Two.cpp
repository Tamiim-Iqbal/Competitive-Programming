/**
 *   author:  tamim-iqbal
 *   created: 27/04/2025 17:15:50
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
    ll n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    ll total_num_of_twos = 0;
    ll current_num_of_twos = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == 2)
        {
            total_num_of_twos++;
        }
    }

    ll ans = -1;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == 2)
        {
            current_num_of_twos++;
        }

        if(current_num_of_twos == total_num_of_twos - current_num_of_twos)
        {
            ans = i + 1;
            break;
        }
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



