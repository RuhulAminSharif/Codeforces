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
        set<ll>st; ll a[n], ans=0;
        for(ll i=0; i<n; i++){
            cin >> a[i];
            st.insert(a[i]);
        }
        for(auto u : st){
            if(count(a,a+n,u)==1){
                for(ll i=0; i<n; i++){
                    if(a[i]==u){
                        ans = i+1;
                        break;
                    }
                }
            }
            if(ans!=0){
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}