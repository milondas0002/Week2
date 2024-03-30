#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<ll> a(n);
        map<int, int> frequency;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            frequency[a[i]]++;
        }
        int max_frequency=0, ans=0;
        for(auto i:frequency)
        {
            max_frequency=max(max_frequency, i.second);
        }
        while(max_frequency<n)
        {
            int rem=n-max_frequency;
            int can_add=max_frequency;
            ans++;
            ans+=min(can_add, rem);
            max_frequency+=min(can_add, rem);
        }
        cout << ans << "\n";
    }
    return 0;
}