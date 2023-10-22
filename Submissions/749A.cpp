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
    cout << n/2 << endl;
    if(n&1){
        for(int i=1; i<n/2; i++){
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }else{
        for(ll i=1; i<=n/2; i++){
            cout << 2 << " ";
        }
        cout << endl;
    }
    return 0;
}