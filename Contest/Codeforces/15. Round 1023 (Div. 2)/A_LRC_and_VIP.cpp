/**
 *   author:  tamim-iqbal
 *   created: 05/05/2025 20:40:16
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
    for(int i = 0; i < n; i++) cin >> a[i];
 
    int mn = *min_element(a, a + n);
    int mx = *max_element(a, a + n);
 
    if(mn == mx)
    {
        no return;
    }
    else
    {
        yes
        for(int i = 0; i < n; i++)
        {
            if(a[i] == mx)
            {
                cout <<"2 ";
            }
            else 
            {
                cout << "1 ";
            }
        }
        cout << endl;
        
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