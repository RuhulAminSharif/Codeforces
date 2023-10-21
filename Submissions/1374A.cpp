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
        int x, y, n; cin >> x >> y >> n;
        if(n%x>y){
            cout << n - ((n%x)-y) << endl;
        }else if(n%x<y){
            cout << n - (n%x) - (x-y) << endl;
        }else{
            cout << n << endl;
        }
    }
    return 0;
}