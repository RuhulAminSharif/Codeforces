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
        ll a, b; cin >> a >> b;
        if(abs(a-b)%10==0){
            cout << abs(a-b)/10 << endl;
        }else{
            cout << abs(a-b)/10+1 << endl;
        }
    }
    return 0;
}