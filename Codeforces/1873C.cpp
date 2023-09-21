#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t, k=0; cin >> t;
    while(t--){
        char ch;
        ll ans = 0;
        for(ll i=1; i<=10; i++){
            for(ll j=1; j<=10; j++){
                cin >> ch;
                if(ch=='X'){
                    if(i==1 || j==1 || i==10 || j==10){
                        ans += 1;
                    }else if(i==2 || j==2 || i==9 || j==9){
                        ans += 2;
                    }else if(i==3 || j==3 || i==8 || j==8){
                        ans += 3;
                    }else if(i==4 || j==4 || i==7 || j==7){
                        ans += 4;
                    }else{
                        ans += 5;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}