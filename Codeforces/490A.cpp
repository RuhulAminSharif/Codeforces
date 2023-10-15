#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    ll cnt[3]={0}, a[n];
    for(ll i=0; i<n; i++){
        cin >> a[i];
        cnt[a[i]-1] += 1;
    }
    sort(cnt, cnt+3);
    cout << cnt[0] << endl;
    for(ll i=0; i<cnt[0]; i++){
        // 1 2 3
        ll k=0;
        bool fg, fg1, fg2;
        fg = fg1 = fg2 = true;
        for(ll j=0; j<n; j++){
            if(k>=3){
                break;
            }
            if(a[j]==1 && k<3 && fg){
                fg = false;
                k += 1;
                a[j] = -1;
                cout << j+1 << " ";
            }
            if(a[j]==2 && k<3 && fg1){
                fg1 = false;
                k += 1;
                a[j] = -1;
                cout << j+1 << " ";
            }
            if(a[j]==3 && k<3 && fg2){
                fg2 = false;
                k += 1;
                a[j] = -1;
                cout << j+1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}