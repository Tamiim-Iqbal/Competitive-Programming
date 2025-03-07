#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        int n, count = 0; 
        cin >> n;

        string s, search = "..."; 
        cin >> s;
 
        size_t found = s.find(search);
        
        if(found != string::npos)
        {
           cout<<2<<endl;
        }
        else
        {
            for(char c : s)
            {
                if(c == '.') count++;
            }
            cout<<count<<endl;
        }

    }
    return 0;
}