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
        ll n, m; cin >> n >> m;
        char ch[n][m];
        for(ll i=0; i<n; i++){
            for(ll j=0; j<m; j++){
                cin >> ch[i][j];
            }
        }
        string tmp="vika";
        ll cnt=0, x=0;
        for(ll i=0; i<m; i++){
            for(ll j=0; j<n; j++){
                if(tmp[x]==ch[j][i]){
                    cnt += 1;
                    x += 1;
                    break;
                }
                if(cnt==4) break;
            }
        }
        if(cnt==4){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}