#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        ll cnt=0;
        for(ll i=0; i<s.size(); i++){
            if(s[i]=='0'){
                cnt++;
            }
        }
        if(cnt){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}