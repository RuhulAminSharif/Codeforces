#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1; cin >> t;
    while(t--){
        ll a, b, c; cin >> a >> b >> c;
        if(c&1){
            if(a>=b) cout << "First" << endl;
            else cout << "Second" << endl;
        }
        else{
            if(b>=a) cout << "Second" << endl;
            else cout << "First" << endl;
        }
    }
    return 0;
}