#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n" 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll k, r, ans; cin >> k >> r;
    for(ll i=1; i<=10; i++){
        if((i*k)%10==r || (i*k)%10==0){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}