#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m=0, c=0;
    cin >> n;
    while(n--){
        ll x, y; cin >> x >> y;
        if(x>y){
            m += 1;
        }else if(x<y){
            c += 1;
        }
    }
    if(m==c){
        cout << "Friendship is magic!^^" << endl;
    }else if(m>c){
        cout << "Mishka" << endl;
    }else{
        cout << "Chris" << endl;
    }
    return 0;
}