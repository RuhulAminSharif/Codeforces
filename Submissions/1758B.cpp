#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(n&1){
            while(n--) cout << 1 <<  " " ;
            cout << endl;
        }
        else{
            cout << 1 << " " << 3 << " " ;
            n -= 2;
            while(n--) cout << 2 << " ";
            cout << endl;
        }
    }
    return 0;
}
