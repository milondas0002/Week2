#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    ll s, l=0, sum=0, ans=0;
    cin >> n >> s;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int r=0; r<n; r++)
    {
        sum+=a[r];
        while(sum>s)
        {
            sum-=a[l];
            l++;
        }
        if(sum<=s) ans+=(r-l+1);
    }
    cout << ans;
    return 0;
}