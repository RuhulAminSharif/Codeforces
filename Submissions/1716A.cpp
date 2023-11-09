#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mx = 3*1e4+10;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1LL;
    cin >> t;
    while(t--){
        ll n; cin >> n;
        if(n%3==0)
            cout << n/3 << endl;
        else if(n==1)
            cout << 2 << endl;
        else
            cout << n/3+1 << endl;
    }
    return 0;
}
