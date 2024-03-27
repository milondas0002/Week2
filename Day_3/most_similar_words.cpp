#include<bits/stdc++.h>
using namespace std;
#define ll long long
int call(string x, string y)
{
    int res=0;
    for(int i=0; i<x.size(); i++)
    {
        res+=abs(x[i]-y[i]);
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vector<string> s(n);
        for(int i=0; i<n; i++) cin >> s[i];
        int ans=INT_MAX;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i!=j) ans=min(ans, call(s[i], s[j]));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}