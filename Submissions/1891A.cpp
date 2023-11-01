#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t = 1;
    cin >> t;
    for(ll test=1; test<=t; test++){
      //  cout << "Case " << test << " : ";
      ll n; cin >> n;
      ll a[n+1];
      for(ll i=1; i<=n; i++){
        cin >> a[i];
      }
      bool fg = true;
      ll t=2;
      for(ll i=3; i<n; i++){
        //   cout << i;
        for(ll j = i; j<2*t && j<n; j++){
            // cout << j;
            if(a[j]>a[j+1]){
                fg = false;
            }
        }
        // cout << endl;
        if(!fg)break;
        t*=2;
        i=t;
        // cout << t;
      }
      if(fg) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
    return 0;
}