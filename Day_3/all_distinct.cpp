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
        vector<int> a(n);
        map<int, int> frequency;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            frequency[a[i]]++;
        }
        int delet=0;
        for(auto i:frequency)
        {
            delet+=(i.second-1);
        }
        int ans=n-delet;
        if(delet%2!=0) 
        {
            ans--;
        }
        cout << ans << '\n';
    }
    return 0;
}