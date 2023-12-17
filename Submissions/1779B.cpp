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
            if(n<5) cout << "NO" << endl;
            else{
                cout << "YES" << endl;
                int k = (n-1)/2;
                for(int i=1; i<=n/2; i++){
                    cout << k-1 << " " << -k << " ";
                }
                cout << k-1 << endl;
            }
        }
        else{
            cout << "YES" << endl;
            for(ll i=1; i<=n/2; i++) cout << 1 << " " << -1 << " ";
            cout << endl;
        }
    }
    return 0;
}
