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
        ll n; cin >> n;
        string a, b; cin >> a >> b;
        for(ll i=0; i<n; i++){
            a[i] = a[i]=='G'?'B':a[i];
            b[i] = b[i]=='G'?'B':b[i];
        }
        if(a==b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}