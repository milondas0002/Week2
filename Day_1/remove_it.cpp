#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    a.erase(remove(a.begin(), a.end(), x), a.end());
    for(auto it:a)
    {
        cout << it << " ";
    }
    return 0;
}