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
        ll n; cin >> n;
        vector<ll>vec(n);
        for(ll i=0; i<n; i++){
            cin >> vec[i];
        }
        vector<ll>v(vec);
        sort(v.begin(), v.end());
        for(ll i=0; i<n; i++){
            if(vec[i]==v[n-1]){
                cout << vec[i]-v[n-2] << " ";
            }else{
                cout << vec[i]-v[n-1] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}