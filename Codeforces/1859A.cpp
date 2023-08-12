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
        ll a[n]; for(ll i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        if(a[0]==a[n-1]){
            cout << -1 << endl;
        }else{
            vector<ll>b, c;
            for(ll i=n-1; i>=0; i--){
                if(a[i]==a[n-1]){
                    c.push_back(a[i]);
                }else{
                    b.push_back(a[i]);
                }
            }
            reverse(b.begin(), b.end());
            reverse(c.begin(), c.end());
            cout << b.size() << " " << c.size() << endl;
            for(ll i=0; i<b.size(); i++){
                cout << b[i] << " ";
            }
            cout << endl;
            for(ll i=0; i<c.size(); i++){
                cout << c[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}