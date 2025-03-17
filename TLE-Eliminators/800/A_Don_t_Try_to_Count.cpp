/**
 *   author:  TAMIM IQBAL
 *   created: 17/03/2025 21:47:16
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n, m, loop = 6, res = 0, flag = 0;
        string x, s;
        cin>>n>>m;
        cin>>x>>s;

        while(loop--)
        {
            if(x.find(s) != -1)
            {
                flag = 1;
                break;
            }
            x += x;
            res++;
        }
        if(flag) cout<<res<<endl;
        else cout<<-1<<endl;
    }
        
    return 0;
}