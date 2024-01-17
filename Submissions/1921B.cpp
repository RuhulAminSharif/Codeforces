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
        ll n; string a, b; cin >> n >> a >> b;
        ll cnt1=0, cnt2=0;
        for(ll i=0; i<n; i++){
            if(a[i]!=b[i]){
                cnt1 += a[i]=='1';
                cnt2 += b[i]=='1';
            }
        }
        cout << max(cnt1,cnt2) << endl;
    }
    return 0;
}
