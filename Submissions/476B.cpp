#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s1, s2;
    cin >> s1 >> s2;
    ll pos=0, pos1=0, q=0;
    for(ll i=0; i<s1.size(); i++){
        if(s1[i]=='+') pos += 1;
        else pos -= 1;
    }
    for(ll i=0; i<s2.size(); i++){
        if(s2[i]=='+') pos1 += 1;
        else if(s2[i]=='-') pos1 -= 1;
        else q += 1;
    }
    int r = abs(pos-pos1);
    double ans;
    if(q<abs(r) ){
        ans = 0;
    }else{
        r = (q-r)/2;
        ans = 1;
        for(int i=1; i<=q; i+=1) ans/=2;
        for(int i=1; i<=q; i+=1) ans*=i;
        for(int i=1; i<=r; i+=1) ans/=i;
        for(int i=1; i<=(q-r); i+=1) ans /= i;
    }
    cout << fixed << setprecision(12) << ans << endl;
    return 0;
}