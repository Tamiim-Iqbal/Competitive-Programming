/**
 *   author:  tamim-iqbal
 *   created: 02/05/2025 22:56:30
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
    int n, k; cin >> n >> k;
    string s; cin>>s;

    if(n == 1) {yes return;}

    map<char,int>mp;
    //set<char>st;

    for(int i = 0; i < n; i++)
    {
        mp[s[i]]++;
        //st.insert(s[i]);
    }

    int count = 0;

    for(auto i:mp)
    {
        if(i.second % 2 !=0)   //abba -> even needed to be palindrome
        {
            count++;
        }
    }

    // for(char c:st)
    // {
    //     if(m[c]%2 != 0)
    //     {
    //         count++;
    //     }
    // }
    
    //cout<<count;
    if(k<count-1) no else yes   //ababa -> max 1 odd will be there
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



