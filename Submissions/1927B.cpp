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
        ll n; cin >> n;
        vector<ll>vec;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            vec.push_back(x);
        }
        map<char,ll>mpp;
        for(ll i=0; i<26; i++){
            mpp[(char)('a'+i)]=0;
        }
        string ans;
        for(ll i=0; i<n; i++){
            for(auto it: mpp){
                if(it.second == vec[i]){
                    ans += it.first;
                    mpp[it.first] += 1;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}