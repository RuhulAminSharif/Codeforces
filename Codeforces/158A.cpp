#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k; cin >> n >> k;
    ll a[n], ans=0; 
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    for(ll i=0; i<n; i++){
        if(a[i]>=a[k-1] && a[i]){
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}