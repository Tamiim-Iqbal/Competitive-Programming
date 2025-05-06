/**
 *   author:  tamim-iqbal
 *   created: 07/05/2025 04:27:32
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
    string s; cin >> s;
 
    vl a(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    ll cur_sum = 0 , max_sum = 0;
 
    for(ll i = 0; i < n; i++)
    {
        if(s[i] == '1')
        {
            cur_sum = max(cur_sum + a[i], a[i]);
            max_sum = max(max_sum, cur_sum);
        }
        else
        {
            cur_sum = 0;
        }
    }
 
    if(max_sum > k) no
 
    else if(k == max_sum)
    {
        yes
        for(ll i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                a[i] = -1e18;
            }
        }
        for(auto x : a)
        {
            cout << x << " ";
        }
        cout << endl;
    }
 
    else
    {
        ll zer = -1;
        for(ll i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                zer = i;
                break;
            }
        }
        if(zer == -1) {no return;}
 
        yes
        ll pref = 0, suff = 0, pre_sum = 0, suf_sum = 0;
        
        for(ll i = zer - 1; i >= 0; i--)
        {
            if(s[i] == '0') break;
            else 
            {
                pre_sum += a[i];
                pref = max(pref, pre_sum);
            }
            
        }
        for(ll i = zer + 1; i < n; i++)
        {
            if(s[i] == '0') break;
            else 
            {
                suf_sum += a[i];
                suff = max(suff, suf_sum);
            }
        }
 
        a[zer] = k - pref - suff;
 
        for(ll i = 0; i < n; i++)
        {
            if(s[i] == '0' && i != zer)
            {
                a[i] = -1e18;
            }
        }
        for(auto x : a)
        {
            cout << x << " ";
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