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
        int n; cin >> n;
        int a[n];
        bool fg = true;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i=1; i<n; i++){
            if(a[i]-a[i-1] > 1){
                fg = false;
                break;
            }
        }
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}