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
        string a, b; cin >> a >> b;
        vector<ll>ans;
        for(ll i=0; i<n; i++){
            if(a[i]!=b[i]){
                if(i) ans.push_back(i+1);
                ans.push_back(1);
                if(i) ans.push_back(i+1);
            }
        }
        cout << ans.size();
        for(auto it : ans){
            cout << " " << it;
        }
        cout << endl;
    }
    return 0;
}
