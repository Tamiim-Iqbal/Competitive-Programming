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

int calculate_gcd(const vector<int>& arr) 
{
    int gcd_val = arr[0];
    for (int i = 1; i < arr.size(); i++) 
    {
        gcd_val = gcd(gcd_val, arr[i]);
    }
    return gcd_val;
}

void solve()
{
    int n; cin >> n;
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    bool same = true;
    for(int i = 1; i < n; i++)
    {
        if(a[i] != a[0])
        {
            same = false;
            break;
        }
    }
    if(same) {no return;}

    bool found = false;

    int gcd_b = a[0];
    int gcd_c = calculate_gcd(vi(a.begin() + 1, a.end()));

    if (gcd_b != gcd_c) 
    {
        yes
        cout << "1 ";
        for (int i = 1; i < n; i++) 
        {
            cout << "2 ";
        }
        cout << endl;
        found = true;
        return;
    }

    for (int i = 0; i < n; ++i) 
    {
        vi tmp_b;
        for (int j = 0; j < n; j++) 
        {
            if (j != i) tmp_b.push_back(a[j]);

        }
        int current_gcd_b = calculate_gcd(tmp_b);
        int current_gcd_c = a[i];

        if (current_gcd_b != current_gcd_c) 
        {
            yes
            for (int j = 0; j < n; j++) 
            {
                if (j == i) cout << "2 ";
                else cout << "1 ";
                
            }
            cout << endl;
            found = true;
            break;
        }
    }

    if (!found) no

    
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



