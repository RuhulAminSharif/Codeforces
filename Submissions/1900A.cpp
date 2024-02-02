#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1; cin >> t;
    while(t--){
        ll n; string s; cin >> n >> s;
        ll tot = count(s.begin(), s.end(),'.');
        ll curr=0, mx=0;
        for(ll i=0; i<n; i++){
            if(s[i]=='.') curr += 1;
            if(s[i]=='#'){
                mx = max(curr, mx);
                curr = 0;
            }
            mx = max(curr, mx);
        }
        if(mx>=3LL) cout << min(tot,2LL) << endl;
        else cout << tot << endl;
    }
    return 0;
}
