#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mx = 1e5+7;
void solve(void)
{
    int a[3];
    for(int i=0; i<3; i++){
        cin >> a[i];
    }
    sort(a,a+3);
    if(a[0]==a[1]){
        cout << a[2] << endl;
    }
    else{
        cout << a[0] << endl;
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