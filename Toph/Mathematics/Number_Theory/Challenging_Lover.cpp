#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mx = 1e7+10;
vector<bool>vis(mx+1);
vector<ll>prime;
set<ll>st;
void sieve()
{
    vis[0]=vis[1] = true;
    for(ll i=3; i*i<=mx;i+=2){
        if(vis[i]==false){
            for(ll j=i*i; j<=mx; j+=2*i){
                vis[j]=true;
            }
        }
    }
    prime.push_back(2);
    st.insert(2);
    for(ll i=3; i<=mx; i+=2){
        if(vis[i]==false){
            prime.push_back(i);
            st.insert(i);
        }
    }
}
ll SOD(ll n)
{
    vector<pair<ll,ll>>factorcnt;
    for(ll i=0; prime[i]*prime[i]<=n; i++){
        ll cnt=0;
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                n/=prime[i];
                cnt += 1;
            }
        }
        if(cnt) factorcnt.push_back({prime[i],cnt});
    }
    if(n>1) factorcnt.push_back({n,1});

    ll sod = 1;
    for(ll i=0; i<factorcnt.size(); i++){
        sod *= ((pow(factorcnt[i].first,factorcnt[i].second+1))-1)/(factorcnt[i].first-1);
    }
    return sod;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    ll t; cin >> t;
    while(t--){
        ll x; cin >> x;
        // cout << SOD(x) << " ";
        if(st.find(SOD(x))!=st.end()){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}