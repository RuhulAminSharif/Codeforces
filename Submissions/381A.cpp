#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n" 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, s=0, d=0; cin >> n;
    deque<ll>pq;
    for(ll i=0; i<n; i++){
        ll x; cin >> x;
        pq.push_back(x);
    }
    bool fg = true;
    while(pq.size()){
        if(fg){
            fg = false;
            if(pq.front()>=pq.back()){
                s += pq.front();
                pq.pop_front();
            }else{
                s += pq.back();
                pq.pop_back();
            }
        }else{
            fg = true;
            if(pq.front()>=pq.back()){
                d += pq.front();
                pq.pop_front();
            }else{
                d += pq.back();
                pq.pop_back();
            }
        }
    }
    cout << s << " " << d << endl;
    return 0;
}