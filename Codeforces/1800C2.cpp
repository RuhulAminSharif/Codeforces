#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n, ans=0; cin >> n;
        priority_queue<ll>pq;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            if(x) pq.push(x);
            else if(!pq.empty()){
                ans += pq.top();
                pq.pop();
            }
        }
        cout << ans << endl;
    }
    return 0;
}