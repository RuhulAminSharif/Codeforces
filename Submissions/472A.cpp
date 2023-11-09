#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1LL;
    //cin >> t;
    while(t--){
        ll n; cin >> n;
        if(n&1) cout << 9 << " " << n-9 << endl;
        else cout << 8 << " " << n-8 << endl;
    }
    return 0;
}
