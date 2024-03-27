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
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++)
        {
            int x;
            string s;
            cin >> x >> s;
            for(char c:s)
            {
                if(c=='D')
                {
                    a[i]++;
                    if(a[i]==10) a[i]=0;
                }
                else
                {
                    a[i]--;
                    if(a[i]==-1) a[i]=9;
                }
            }
        }
        for(int val:a)
        {
            cout << val << " ";
        }
        cout << '\n';
    }
    return 0;
}