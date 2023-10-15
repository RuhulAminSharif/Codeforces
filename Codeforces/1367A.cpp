#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        string s; cin >> s;
        string ans;
        ans += s[0];
        ans += s[1];
        for(ll i=3; i<s.size(); i+=2){
            ans += s[i];
        }
        cout << ans << endl;
    }
    return 0;
}