/**
 *   author:  tamim-iqbal
 *   created: 24/04/2025 21:38:39
**/

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

bool allMinusOne(ll a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] != -1) return false;
    }
    return true;
}
void solve()
{
    ll n, k;  cin >> n >> k;

    ll a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    bool flag = true;
    int sum = 0;
    int sumCount = 0;
    for(int i = 0; i < n; i++)
    {
        if(b[i] != - 1  && sumCount == 0) 
        {
            sum = a[i] + b[i];
            sumCount++;
        }
        else if(b[i] != - 1  && sumCount > 0)
        {
            int checkSum = a[i] + b[i];
            if(checkSum != sum) 
            {
                flag = false;
                break;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(sumCount > 0 && a[i] > sum)
        {
            flag = false;
            break;
        }
    }
    int minA = *min_element(a, a + n);
    int maxA = *max_element(a, a + n);

    if(sumCount && minA + k < sum)
    {
        flag = false;
    }

    if(!flag)
    {
        cout << 0 << endl;
    }
    
    else
    {
        int ans = 0;
        if(allMinusOne(b, n))
        {
            ans = (minA + k) - maxA + 1;
            cout << ans << endl;
        }
        else
        {
            cout << 1 << endl;
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



