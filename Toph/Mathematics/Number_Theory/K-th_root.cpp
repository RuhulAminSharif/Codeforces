#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mx = 1e6+5;
vector<ll>prime;
void sieve()
{
    vector<bool>vis(mx,false);
    for(ll i=3; i*i<mx; i+=2){
        if(vis[i]==false){
            for(ll j=i*i; j<mx; j+=2*i){
                vis[j]=true;
            }
        }
    }
    prime.push_back(2);
    for(ll i=3; i<mx; i+=2){
        if(vis[i]==false){
            prime.push_back(i);
        }
    }
    return ;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    ll t; cin >> t;
    for(ll c=1; c<=t; c++){
        ll a, b; cin >> a >> b;
        map<ll,ll>mp;
        for(ll i=0; prime[i]*prime[i]<=a; i++){
            if(a%prime[i]==0){
                while(a%prime[i]==0){
                    a/=prime[i];
                    mp[prime[i]] ++;
                }
            }
        }
        if(a>1) mp[a] ++;
        ll ans = b, tmp=-1;
        for(auto it : mp){
            if(tmp==-1) tmp = it.second;
            else tmp = __gcd(tmp, it.second);
        }
        cout << "Case #" << c << ": " << tmp*b << endl;
    }
    return 0;
}
