#include<bits/stdc++.h>
using namespace std;
const int mx = 1e6+1;
string s;
struct info
{
    int left, right, full;
}tree[4*mx];
void build(int node, int b, int e)
{
    if(b==e){
        tree[node].left = (s[b]=='(');
        tree[node].right = (s[b]==')');
        tree[node].full = 0;
        return ;
    }
    int mid = (b+e)/2;
    build(2*node, b, mid);
    build(2*node+1, mid+1, e);
    int tmp = min(tree[2*node].left, tree[2*node+1].right);
    tree[node].full = tree[2*node].full + tree[2*node+1].full + 2*tmp;
    tree[node].left =  tree[2*node].left + tree[2*node+1].left - tmp;
    tree[node].right =  tree[2*node].right + tree[2*node+1].right - tmp;
}
struct info query(int node, int b, int e, int ql, int qr)
{
    if(e<ql || qr<b){
        struct info p;
        p.left=p.right=p.full=0;
        return p;
    }
    if(ql<=b && e<=qr){
        return tree[node];
    }
    int mid = (b+e)/2;
    struct info x = query(2*node, b, mid, ql, qr);
    struct info y = query(2*node+1, mid+1, e, ql, qr);
    struct info curr;
    int tmp = min(x.left, y.right);
    curr.full = x.full + y.full + 2*tmp;
    curr.left =  x.left + y.left - tmp;
    curr.right =  x.right + y.right - tmp;
    return curr;
}
int main()
{
    cin >> s;
    s = '0' + s;
    build(1,1,s.size());
    int n; cin >> n;
    while(n--){
        int l, r; cin >> l >> r;
        cout << query(1,1,s.size(),l,r).full << endl;
    }
}
