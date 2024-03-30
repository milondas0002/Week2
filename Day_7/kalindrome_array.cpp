#include<bits/stdc++.h>
using namespace std;
#define ll long long
int solve(vector<int> &v)
{
    int l=0, r=v.size()-1, ans=1;
    while(l<r)
    {
        if(v[l]!=v[r])
        {
            ans=0;
            break;
        }
        l++;
        r--;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int l=0, r=n-1, ans=-1, c, b;
        while(l<r)
        {
            if(a[l]!=a[r]) 
            {
                ans=1;
                b=a[l];
                c=a[r];
                break;
            }
            l++;
            r--;
        }
        if(ans==-1) cout << "YES\n";
        else
        {
            vector<int> v1, v2;
            for(int i=0; i<n; i++)
            {
                if(a[i]==b) continue;
                v1.push_back(a[i]);
            }
            for(int i=0; i<n; i++)
            {
                if(a[i]==c) continue;
                v2.push_back(a[i]);
            }
            int ans1=solve(v1);
            int ans2=solve(v2);
            if(ans1==1 || ans2==1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}