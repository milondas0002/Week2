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
        string s;
        cin >> s;
        int c=0;
        for(int i=0; i<n; i++)
        {
            //if(s[i]==')' && c) c--;
            if(s[i]=='(') c++;
            if(s[i]==')' && c>0) c--;
        }
        cout << c << endl;
    }
    return 0;
}