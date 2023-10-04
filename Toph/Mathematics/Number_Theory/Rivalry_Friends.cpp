#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mx = 1e5+7;
vector<bool>vis(mx);
vector<ll>prime;

ll a[mx], b[mx];
ll tree[4*mx]; // segment tree for sum

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
ll phi(ll n)
{
    ll res = n;
    for(ll i=0; prime[i]*prime[i]<=n; i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                n /= prime[i];
            }
            res -= res/prime[i];
        }
    }
    if(n>1){
        res -= res/n;
    }
    return res;
}

void build(ll node, ll start, ll end) 
{
    if(start==end){
        tree[node] = a[start];
        return ;
    }
    ll left = 2*node;
    ll right = 2*node+1;
    ll mid = (start+end)/2;
    build(left, start, mid);
    build(right, mid+1, end);
    tree[node] = tree[left]+tree[right];
}
ll query(ll node, ll start, ll end, ll ql, ll qr)
{
    if(end<ql || qr<start){ // out of range
        return 0;
    }
    if(ql<=start && end<=qr){
        return tree[node]; // in range
    }
    ll left = 2*node; // 1 - base indexing
    ll right = 2*node+1; // 1 - base indexing
    ll mid = (start+end)/2;
    ll sum = 0;
    sum += query(left, start, mid, ql, qr);
    sum += query(right, mid+1, end, ql, qr);
    return sum;
}
// single index update
void update(ll node, ll start, ll end, ll index, ll value)
{
    if(index<start || end<index){ // out of range
        return ;
    }
    if(index<=start && end<=index){
        a[index] = phi(value);
        tree[node] = a[index];
        return ;
    }
    ll left = 2*node; // 1 - base indexing
    ll right = 2*node+1; // 1 - base indexing
    ll mid = (start+end)/2;
    update(left, start, mid, index, value);
    update(right, mid+1, end, index, value);
    tree[node] = tree[left]+tree[right];
    return ;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    ll n, q; cin >> n >> q;
    for(ll i=1; i<=n; i++){
        cin >> b[i];
        a[i] = phi(b[i]);
    }
    build(1,1,n);
    while(q--){
        ll x; cin >> x;
        if(x==1){
            ll i, v; cin >> i >> v;
            update(1,1,n,i,v);
        }else{
            ll l, r; cin >> l >> r;
            cout << query(1,1,n,l,r) << endl;
        }
    }
    return 0;
}