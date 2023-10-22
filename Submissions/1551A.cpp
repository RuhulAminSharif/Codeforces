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
        ll c1 = n/3, c2 = n/3;
        if(n%3==1){
            c1 += 1;
        }else if(n%3==2){
            c2 += 1;
        }
        cout << c1 << " " << c2 << endl;
    }
    return 0;
}