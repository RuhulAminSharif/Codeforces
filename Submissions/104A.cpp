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
    if(n<=10 || n>=22){
        cout << 0 << endl;
    }else if((n>=11 && n<=19)||n==21){
        cout << 4 << endl;
    }else if(n==20){
        cout << 15 << endl;
    }
    return 0;
}