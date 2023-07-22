#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll k = 1000;
    while (k){
        for(int j=1; j<=5; j++){
            cout << k-- << " ";
        }
        cout << endl;
    }
    return 0;
}