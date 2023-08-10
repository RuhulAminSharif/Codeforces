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
        ll m = n*(n-1)/2;
        ll a[m];
        for(ll i=0; i<m; i++){
            cin >> a[i];
        }
        sort(a,a+m);
        for(ll i=0; i<m; i+=--n){
            cout << a[i] << " ";
        }
        cout << a[m-1] << endl;
    }
    return 0;
}