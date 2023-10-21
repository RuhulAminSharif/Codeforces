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
        ll n, k, small[27]={0}, capital[27]={0};
        cin >> n >> k;
        for(ll i=0; i<n; i++){
            char ch; cin >> ch;
            if(ch>='a'){
                small[ch-'a'+1]++;
            }else{
                capital[ch-'A'+1]++;
            }
        }
        ll ans = 0;
        for(ll i=1; i<27; i++){
            ll tmp = min(small[i], capital[i]);
            ans += tmp;
            small[i] -= tmp;
            capital[i] -= tmp;
            if(small[i]==capital[i]){
                ans += small[i];
            }else if(small[i] && !capital[i]){
                if(small[i]/2<=k && k){
                    ans += small[i]/2;
                    k -= (small[i]/2);
                }else{
                    ans += k;
                    k -= k;
                }
            }else if(!small[i] && capital[i]){
                if(capital[i]/2 <= k && k){
                    ans += capital[i]/2;
                    k -= (capital[i]/2);
                }else{
                    ans += k;
                    k -= k;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}