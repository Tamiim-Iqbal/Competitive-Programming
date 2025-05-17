/**
 *   author:  tamim-iqbal
 *   created: 17/05/2025 20:37:45
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
    int a[n];
    int one = 0, zero = 0;
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
        if(a[i] == 1) one++;
        else zero++;
    }

    if(one == 0 || zero == 0)
    {
        yes return;
    }

    bool flag = false;
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] == 0 && a[i + 1] == 0)
        {
            flag = true;
            break;
        }
    }
    if(flag) yes else no
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



