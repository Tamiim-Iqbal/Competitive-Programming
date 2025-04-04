/**
 *   author:  tamim-iqbal
 *   created: 04/04/2025 20:11:28
**/

// Time Complexity : O(n)
// Space Complexity : O(n)

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

#define endl "\n";
#define ff first
#define ss second

vector<char> a = {'L', 'I', 'T'};

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    set<char> st;

    for (auto c : s) st.insert(c);

    if (st.size() == 1) 
    {
        cout << -1 << endl;
        return;
    }

    vector<int> ans;
    map<char, int> mp;

    for (char c : s) mp[c]++;

    auto func = [&](int i) 
    {
        for (char c : a) 
        {
            if (s[i] != c && s[i + 1] != c) return c;
        }
        return '$';
    };

    while (max({mp['L'], mp['I'], mp['T']}) != min({mp['L'], mp['I'], mp['T']})) 
    {
        int mn = min({mp['L'], mp['I'], mp['T']});
        int mx = max({mp['L'], mp['I'], mp['T']});
        int flag = 0;

        for (int i = 0; i < s.size() - 1; i++) 
        {
            char x = func(i);
            if (s[i] != s[i + 1] && mp[x] == mn) 
            {
                mp[x]++;
                flag = 1;
                s.insert(s.begin() + i + 1, x);
                ans.push_back(i);
                break;
            }
        }
        if (!flag) 
        {
            for (int i = 0; i < s.size() - 1; i++) 
            {
                char x = func(i);
                if (s[i] != s[i + 1] && mp[x] == mx) 
                {
                    mp[x]++;
                    flag = 1;
                    s.insert(s.begin() + i + 1, x);
                    ans.push_back(i);
                    break;
                }
            }
        }
    }
    cout << ans.size() << endl;
    for (auto it : ans) 
    {
        cout << it + 1 << endl;
    }
}

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
