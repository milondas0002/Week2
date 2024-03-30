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
    ll l=0, sum=0, ans=0;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(ll r=0; r<n; r++)
    {
        sum+=a[r];
        while(sum>=s)
        {
            ans+=n-r;
            sum-=a[l];
            l++;
        }
    }
    cout << ans;
    return 0;
}