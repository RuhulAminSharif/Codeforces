#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1LL;   cin >> t;
    while(t--){
        ll n, ans=0; cin >> n;
        priority_queue<ll>pq1, pq2;
        for(ll i=0; i<n; i++){ll x; cin >> x; pq1.push(x);}
        for(ll i=0; i<n; i++){ll x; cin >> x; pq2.push(x);}
        while(pq1.size()){
            ll x = pq1.top(), y = pq2.top();
            pq1.pop(); pq2.pop();
            if(x>y){
                pq1.push(floor(log10(x)+1));
                pq2.push(y);
                ++ans;
            }else if(x<y){
                pq2.push(floor(log10(y)+1));
                pq1.push(x);
                ++ans;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
