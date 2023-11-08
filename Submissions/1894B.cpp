#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll>vec[101];
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            vec[x].push_back(i);
        }
        vector<ll>ans(n,1);
        ll cnt=0;
        for(ll i=0; i<101; i++){
            if(vec[i].size()>=2){
                if(cnt==0){
                    cnt += 1;
                    ans[vec[i][0]] = 1;
                    for(ll j=1; j<vec[i].size(); j++){
                        ans[vec[i][j]] = 2;
                    }
                }
                else if(cnt==1){
                    cnt += 1;
                    ans[vec[i][0]] = 1;
                    for(ll j=1; j<vec[i].size(); j++){
                        ans[vec[i][j]] = 3;
                    }
                }
            }
        }
        if(cnt!=2){
            cout << -1 << endl;
        }
        else{
            for(ll i=0; i<n; i++){
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}