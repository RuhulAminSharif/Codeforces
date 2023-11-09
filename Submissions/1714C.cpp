#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mx = 3*1e4+10;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1LL;
    cin >> t;
    while(t--){
        ll sum, num=0, k=9, d=1; cin >> sum;
        while(sum && k){
            if(k<=sum){
                num = k*d+num;
                sum -= k;
                d *= 10;
            }
            k -= 1;
        }
        cout << num << endl;
    }
    return 0;
}
