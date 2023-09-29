#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mod = 1000000007;
const ll mx = 1e6+5;
vector<ll>prime;
void mod_normal(ll &x) { x %= mod; if(x<0) x+=mod;}
ll mod_mul(ll x, ll y) { x %= mod; y %= mod; mod_normal(x); mod_normal(y); return (x*y)%mod; }
ll mod_add(ll x, ll y) { x %= mod; y %= mod; mod_normal(x); mod_normal(y); return (x+y)%mod; }
ll mod_sub(ll x, ll y) { x %= mod; y %= mod; mod_normal(x); mod_normal(y); x -= y; mod_normal(x); return x; }
ll mod_pow(ll b, ll p) { ll r = 1; while(p){ if(p&1) r = mod_mul(r, b); b = mod_mul(b, b); p >>= 1; } return r; }
ll modinverse(ll x){ return mod_pow(x,mod-2); } /// if mod is prime.
ll mod_div(ll x, ll y){ return mod_mul(x,modinverse(y)); }
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
    ll t=1;cin >> t;
    while(t--){
        ll n=97*97;cin >> n;
        ll tmp = n;
        bool fg = false;
        for(ll i=0; prime[i]*prime[i]<=tmp; i++){
            if(tmp%prime[i]==0){
                tmp=mod_div(tmp,prime[i]);
                fg = true;
                break;
            }
        }
        if(fg)
        cout << mod_mul(n,tmp) << endl;
        else cout << n%mod << endl;
    }
    return 0;
}