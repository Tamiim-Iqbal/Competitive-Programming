/**
 *   author:  TAMIM IQBAL
 *   created: 17/03/2025 16:29:00
**/

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
        
        if(s.find(search) != -1)
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



// In C++, string::npos is a special constant that represents "no position" or an invalid index in a string.
//You can replace string::npos with -1 since string::npos is typically defined as -1 (or the maximum value of size_t


//         size_t found = s.find(search);   
//         if(found != string::npos) 
//         {
//            cout<<2<<endl;
//         }
//         else
//         {
//             for(char c : s)
//             {
//                 if(c == '.') count++;
//             }
//             cout<<count<<endl;
//         }
