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
    while (t--)
    {
        ll n, idx=-1, mx=-1; cin >> n;
        for(ll i=1; i<=n; i++){
            ll a, b; cin >> a >> b;
            if(idx==-1 && a<=10){
                idx = i;
                mx = b;
            }else if(idx!=-1 && a<=10){
                if(max(mx,b)>mx){
                    mx = b;
                    idx = i;
                }
            }
        }
        cout << idx << endl;
    }
    
    return 0;
}