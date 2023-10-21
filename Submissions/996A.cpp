#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    ll ans=0, track[5]={100, 20, 10, 5, 1};
    for(ll i=0; i<5; i++){
        if(n>=track[i]){
            ans += n/track[i];
            n = n%track[i];
        }
    }
    cout << ans << endl;
    return 0;
}