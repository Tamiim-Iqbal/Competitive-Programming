
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int x = c - c/2;
        int y = c/2;
        
        if (a + x > b + y) cout << "First" << endl;
        else cout << "Second" << endl;
    }
    return 0;
}