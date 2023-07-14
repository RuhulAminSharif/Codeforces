#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
string to3(ll a)
{
    string s="";
    while(a){
        s += (a%3+'0');
        a/=3;
    }
    reverse(s.begin(), s.end());
    return s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a, c; cin >> a >> c;
    string s1 = to3(a);
    string s2 = to3(c);
    while(s1.size()!=s2.size()){
        if(s1.size()<s2.size()){
            s1 = "0" + s1;
        }else{
            s2 = "0" + s2;
        }
    }
    string b="";
    for(ll i=s1.size()-1; i>=0; i--){
        for(ll j=0; j<3; j++){
            if((s1[i]+j)%3==s2[i]%3){
                b += (j+'0');
                break;
            }
        }
    }
    ll ans = 0;
    for(ll i=0; i<b.size(); i++){
        ans += (b[i]-'0')*pow(3,i);
    }
    cout << ans << endl;
    return 0;
}