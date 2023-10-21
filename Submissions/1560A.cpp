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
        ll n, k=0; cin >> n;
        for(ll i=0; ; i++){
            if(k==n){
                cout << i-1 << endl;
                break;
            }else if(!(i%10==3 || i%3==0)){
                k++;
            }
        }
    }
    return 0;
}