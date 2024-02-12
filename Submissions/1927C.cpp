#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1; cin >> t;
    while(t--){
        ll n, m, k; cin >> n >> m >> k;
        set<ll>st1, st2, st3;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            if(x<=k){
                st1.insert(x);
                st3.insert(x);
            }
        }
        for(ll i=0; i<m; i++){
            ll x; cin >> x;
            if(x<=k){
                st2.insert(x);
                st3.insert(x);
            }
        }
        set<ll>st4;
        for(auto it : st3){
               // cout << it << " ";
            if(st1.find(it)!=st1.end() && st2.find(it)!=st2.end()){
                st1.erase(it);
                st2.erase(it);
                st4.insert(it);
        //cout << "40";
            }

        }
        ll tmp = st1.size()+st2.size()+st4.size();
        //cout << st1.size() << endl;
        if(tmp<k) cout << "NO" << endl;
        else{
            if((st1.size()+st4.size())<k/2){
                cout << "NO" << endl;
            }
            else if((st2.size()+st4.size())<k/2){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
        st1.clear();
        st2.clear();
        st3.clear();
    }
    return 0;
}