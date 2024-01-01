#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mx = 1e5+7;
void solve(void)
{
    int cnt[3]={0};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            char ch; cin >> ch;
            cnt[ch-'A']++;
        }
    }
    if(cnt[0]==2){
        cout << 'A' << endl;
    }
    else if(cnt[1]==2){
        cout << 'B' << endl;
    }
    else {
        cout << 'C' << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1, test = 1;
    cin >> t;
    while(t--){
        /// cout << "Case : " << test++ << endl;
        solve();
    }
    return 0;
}