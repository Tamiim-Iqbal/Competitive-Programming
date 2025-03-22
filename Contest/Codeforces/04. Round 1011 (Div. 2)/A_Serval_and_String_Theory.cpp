/**
 *   author:  TAMIM IQBAL
 *   created: 22/03/2025 21:18:22
**/

#include<bits/stdc++.h>
using namespace std;

bool isUniversal(const string &s) 
    {
        return (s[0] < s[s.length() - 1]);

        //return s < string(s.rbegin(), s.rend());   // Compare the string with its reverse lexicographically
    }


void solve() 
{
    int n, k; cin >> n >> k;
    string s; cin >> s;

    if (n == 1) 
    {
        cout << "NO" << endl;
        return;
    }

    bool sameChar = true;
    for (char c : s)
    {
        if (c != s[0]) 
        {
            sameChar = false;
            break;
        }
    }
    if (sameChar) 
    {
        cout << "NO" << endl;
        return;
    }
    
    if (isUniversal(s)) 
    {
        cout << "YES" << endl;
        return;
    }

    if(k >= 1) cout << "YES" << endl;
    else cout << "NO" << endl;

    //cout << (k >= 1 ? "YES" : "NO") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();   
    }
    return 0;
}
