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
        char a[100][100];
        for (ll i = 1; i <= 8; i++){
            for (ll j = 1; j <= 8; j++){
                cin >> a[i][j];
            }
        }
        bool fg = true;
        for (ll i = 1; i <= 8; i++)
        {
            ll cnt = 0;
            for (ll j = 1; j <= 8; j++){
                if(a[i][j] == 'R'){
                    cnt += 1;
                }
            }
            if (cnt == 8){
                cout << 'R' << endl;
                fg = false;
                break;
            }
        }
        if(fg) cout << 'B' << endl;
    }
    return 0;
}