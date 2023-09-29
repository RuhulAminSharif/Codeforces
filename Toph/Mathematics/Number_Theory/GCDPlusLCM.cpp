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
    while(n--){
        ll a, b; cin >> a >> b;
        ll g = __gcd(a,b), l = (a/g)*b;
        if(g+l-a == b){
            cout << "true" << endl;
        }else{
            cout << "false" << endl;
        }
    }
    return 0;
}