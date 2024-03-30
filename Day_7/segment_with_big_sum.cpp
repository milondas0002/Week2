
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    ll s;
    cin >> n >> s;
    int l=0, ans=INT_MAX;
    ll sum=0;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int r=0; r<n; r++)
    {
        sum+=a[r];
        while(sum-a[l]>=s)
        {
            sum-=a[l];
            l++;
        }
        if(sum>=s) ans=min(ans, r-l+1);
    }
    if(ans==INT_MAX) cout << "-1";
    else cout << ans;
    return 0;
}