#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"
ll sum(ll n)
{
    ll s=0;
    while(n){
        s += n%10;
        n/=10;
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ll t=1;
    cin >> t;
    for(ll test=1; test<=t; test++){
        ll x, k, ans; cin >> x >> k;
        while(1){
            if(sum(x)%k==0){
                ans = x;
                break;
            }
            x += 1;
        }
        cout << ans << endl;
    }
    return 0;
}
