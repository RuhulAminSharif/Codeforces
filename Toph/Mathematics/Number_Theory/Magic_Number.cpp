#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mx = 1e7+10;
vector<bool>vis(mx+1);
vector<ll>prime;
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
    for(ll i=3; i<=mx; i+=2){
        if(vis[i]==false){
            prime.push_back(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    set<ll>st;
    for(auto x : prime){
        st.insert(x*x);
    }
    ll t; cin >> t;
    while(t--){
        ll x; cin >> x;
        if(st.find(x)!=st.end()){
            cout << "YES." << endl;
        }else{
            cout << "NO." << endl;
        }
    }
    return 0;
}