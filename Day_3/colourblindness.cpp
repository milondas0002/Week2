#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<string> s(2);
        for(int i=0; i<2; i++)
        {
            cin >> s[i];
        }
        bool found=true;
        for(int i=0; i<2; i++)
        {
            if(s[0][i]=='R' && s[1][i]!='R' || s[1][i]=='R' && s[0][i]!='R')
            {
                found=false;
                break;
            }
        }
        if(!found) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}