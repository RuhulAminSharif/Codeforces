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
        ll a[2], ans; cin >> a[0] >> a[1];
        sort(a,a+2);
        
        if((a[0]+a[0])<a[1]){
            ans = a[1]*a[1];
        }else{
            ans = 4*a[0]*a[0];
        }
        cout << ans << endl;
    }
    return 0;
}