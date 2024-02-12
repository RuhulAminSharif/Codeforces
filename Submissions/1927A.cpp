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
        ll n; cin >> n;
        string s; cin >> s;
        ll mx=LLONG_MIN, mn=LLONG_MAX;
        for(ll i=0; i<s.size(); i++){
            if(s[i]=='B'){
                mx = max(mx,i);
                mn = min(mn, i);
            }

        }
        cout << mx-mn+1 << endl;
    }
    return 0;
}