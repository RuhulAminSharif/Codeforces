#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"
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
    // cin >> t;
    for(ll test=1; test<=t; test++){
        ll x, ans=0, cnt=0; cin >> x;
        while(cnt<=x){
            ans += 1;
            cnt += (ans*(ans+1)/2);
        }
        cout << --ans << endl;
    }
    return 0;
}
