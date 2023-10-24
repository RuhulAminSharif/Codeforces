#include<bits/stdc++.h>
using namespace std;
#define ll int
#define endl "\n"
const ll mx = 1e5+7;
ll a[1 << 20];
ll tree[1 << 20];
ll cnt=0;
void build(ll node, ll start, ll end, bool fg) 
{
    if(start==end){
        tree[node] = a[start];
        return;
    }
    ll left = node<<1; 
    ll right = (node<<1)+1;
    ll mid = (start+end)>>1;
    build(left, start, mid, !fg);
    build(right, mid+1, end, !fg);
    if(fg){
        tree[node] = tree[left]|tree[right];
    }else{
        tree[node] = tree[left]^tree[right];
    }
}
void update(ll node, ll start, ll end, ll index, ll value, bool fg)
{
    cnt += 1;
    if(index<start || index>end){
        return ;
    }
    if(index<=start && end<=index){
        tree[node] = value;
        return;
    }
    ll left = node<<1; 
    ll right = (node<<1)+1;
    ll mid = (start+end)>>1;
    if(index<=mid) update(left, start, mid, index, value, !fg);
    else update(right, mid+1, end, index, value, !fg);
    if(fg){
        tree[node] = tree[left]|tree[right];
    }else{
        tree[node] = tree[left]^tree[right];
    }
}
int main()
{
    ll n, m;
    scanf("%d%d", &n, &m);
    ll p = 1<<n;
    for(ll i=1; i<=p;i++){
        scanf("%d", &a[i]);
    }
    bool fg = n%2;
    build(1,1,p, fg);
    while(m--){
        ll idx, val; cin >> idx >> val;
        update(1,1,p, idx, val, fg);
        printf("%d\n", tree[1]);
    }
    return 0;
}