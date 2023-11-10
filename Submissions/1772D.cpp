#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1LL;
    cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a[n];
        for(ll i=0; i<n; i++) cin >> a[i];
        ll LR=1e9, RL=0;
        for(ll i=0; i<n-1; i++){
            if(a[i]<a[i+1]) LR = min(LR, (a[i]+a[i+1])/2);
            else if(a[i]>a[i+1])    RL = max(RL, (a[i]+a[i+1]+1)/2);
        }
        if(RL<=LR) cout << LR << endl;
        else cout << -1 << endl;
    }
    return 0;
}