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
        string s; cin >> s;
        int sum=0;
        for(int i=0; i<=2; i++){
            sum += s[i]-'0';
        }
        for(int i=3; i<=5; i++){
            sum -= s[i]-'0';
        }
        if(sum==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}