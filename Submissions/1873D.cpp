#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t, k=0; cin >> t;
    while(t--){
        ll n, k, cnt=0; cin >> n >> k;
        string s; cin >> s;
        for(ll i=0; i<n; i++){
            if(s[i]=='B'){
                cnt +=1;
                i += k;
                i -= 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}