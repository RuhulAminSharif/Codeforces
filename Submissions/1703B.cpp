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
        ll n; cin >> n;
        string s; cin >> s;
        ll cnt[27]={0}, ans=0;
        for(ll i=0; i<s.size(); i++){
            if(cnt[s[i]-'A']==0){
                ans += 2;
                cnt[s[i]-'A'] += 1;
            }else{
                ans += 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}