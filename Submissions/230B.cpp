#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll mx = 1e6;
vector<bool>vis(mx+1);
set<ll>prime;
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
    prime.insert(2);
    for(ll i=3; i<=mx; i+=2){
        if(vis[i]==false){
            prime.insert(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    ll n; cin >> n;
    for(ll i=0; i<n; i++){
        ll x; cin >> x;
        ll r = sqrt(x);
        if((r*r==x && prime.find(r)!=prime.end())) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
