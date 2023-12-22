#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll sum = n*(n+1)/2;
        ll p=1;
        while(p<=n){
            sum -= (2*p);
            p*=2;
        }
        cout << sum << endl;
    }
    return 0;
}
