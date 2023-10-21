#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, h, x, ans=0;
    cin >> n >> h;
    for(ll i=0; i<n; i++){
        cin >> x;
        if(x>h){
            ans += 2;
        }else{
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}