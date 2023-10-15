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
        ll x, y, cnt=0;
        cin >> x;
        for(ll i=1; i<4; i++){
            cin >> y;
            if(y>x){
                cnt += 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}