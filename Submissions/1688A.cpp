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
        ll x; cin >> x;
        if(x==1){
            cout << 3 << endl;
        }else if((x&(x-1))==0){
            cout << x+1 << endl;
        }else if(x&1){
            cout << 1 << endl;
        }else{
            cout << (x&~(x-1)) << endl;
        }
    }
    return 0;
}