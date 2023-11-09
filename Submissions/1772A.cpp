#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mx = 3*1e4+10;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        cout << (s[0]-'0')+(s[2]-'0') << endl;
    }
    return 0;
}
