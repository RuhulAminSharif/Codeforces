#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a[n]; for(int i=0; i<n; i++) cin >> a[i];
    bool fg = false;
    for(int num=0; num<(1<<n); num++){
        int sum=0;
        for(int bit=0; bit<n; bit++){
            if(num&(1<<bit)){
                sum += a[bit];
            }else{
                sum -= a[bit];
            }
        }
        if(sum%360==0){
            fg = true;
            break;
        }
    }
    if(fg) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}