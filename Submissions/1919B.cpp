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
        ll n; cin >> n;
        string s; cin >> s;
        ll ans = 0;
        for(auto it : s){
            ans += (it=='+');
            ans -= (it=='-');
        }
        cout << abs(ans) << endl;
    }
    return 0;
}
