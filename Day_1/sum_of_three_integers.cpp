#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, s, ans=0;
    cin >> k >> s;
    for(int i=0; i<=k; i++)
    {
        for(int j=0; j<=k; j++)
        {
            int sum=i+j;
            if(s-sum>=0 && s-sum<=k) ans++;
        }
    }
    cout << ans;
    return 0;
}