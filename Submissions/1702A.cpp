#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll arr[11], k=1;
    for(ll i=0; i<10; i++){
        arr[i] = k;
        k *= 10;
    }
    ll t=1LL;
    cin >> t;
    while(t--){
        ll m; cin >> m;
        ll mn=LLONG_MAX;
        for(ll i=0; i<10; i++){
            if(arr[i]>m) break;
            mn = min(abs(arr[i]-m), mn);
        }
        cout << mn << endl;
    }
    return 0;
}
