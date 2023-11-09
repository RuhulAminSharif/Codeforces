#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1LL;
    cin >> t;
    while(t--){
        ll n, cnt=0; string s; cin >> n >> s;
        for(ll i=0; i<n; i++){
            if(s[i]=='Q') cnt++;
            else cnt--;
            if(cnt<0) cnt=0;
        }
        if(cnt) cout <<  "No";
        else cout << "Yes";
        cout << endl;
    }
    return 0;
}
