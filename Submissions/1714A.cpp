#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll mx = 150000+5;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        int n, H, M; cin >> n >> H >> M;
        int ans = 1440, time=60*H+M;
        for(int i=0; i<n; i++){
            int h, m; cin >> h >> m;
            int tmp = 60*h+m;
            if(h==H && m==M) ans = 0;
            else if(tmp<time) ans = min(ans,tmp+1440-time);
            else ans = min(ans, tmp-time);
        }
        cout << ans/60 << " " << ans%60 << endl;
    }
    return 0;
}
