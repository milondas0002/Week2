#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b, c;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        if(a+b==c) cout << "+\n";
        else cout << "-\n";
    }
    return 0;
}