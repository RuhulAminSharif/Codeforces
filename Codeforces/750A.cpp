#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k, p=5, ans=0; cin >> n >> k;
    ll t = 240-k;
    for(ll i=1; i<=n; i++){
        if(t>=5*i){
            ans += 1;
            t -= 5*i;
        }else{
            break;
        }
    }
    cout << ans << endl;
    return 0;
}