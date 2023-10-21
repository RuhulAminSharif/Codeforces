#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n" 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, cnt=0, x, k; cin >> n >> k;
    for(ll i=0; i<n; i++){
        cin >> x;
        if((5-x)>=k){
            cnt += 1;
        }
    }
    cout << cnt/3 << endl;
    return 0;
}