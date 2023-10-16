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
        ll low=0, high = max(a,b), mid, cnt=0;
        while(low<=high){
            mid = low + (high-low)/2;
            if(!a || !b || (a+b)<4){
                break;
            }
            if(mid*4>(a+b)){
                high = mid-1;
            }else if(mid > min(a,b)){
                high = mid-1;
            }else{
                ll tmp = min(a,b);
                if(tmp*3<=max(a,b)){
                    a -= tmp;
                    b -= tmp;
                    cnt += tmp;
                }else{
                    cnt += (a+b)/4;
                    ll tmp = (a+b)/2;
                    break;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}