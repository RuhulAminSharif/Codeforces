#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, p, x; cin >> n >> p;
    bool cnt[n+1]={false}, fg= true;
    for(ll i=0; i<p; i++){
        cin >> x;
        cnt[x] = true;
    }
    cin >> p;
    for(ll i=0; i<p; i++){
        cin >> x;
        cnt[x] = true;
    }
    for(ll i=1; i<=n; i++){
        if(!cnt[i]){
            fg = false;
        }
    }
    if(fg) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
    return 0;
}