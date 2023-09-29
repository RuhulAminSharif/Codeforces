#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mx = 1e7+5;
vector<bool>vis(mx);
ll cnt[mx];
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
    cnt[2] = 1;
    for(ll i=3; i<mx; i++){
        if(vis[i]==false && i%2!=0){
            cnt[i] = cnt[i-1] + 1;
        }else{
            cnt[i] = cnt[i-1];
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << cnt[n-1] << endl;
    }
    return 0;
}