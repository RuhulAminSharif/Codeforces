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
        int carry = 0, pos=s.size()+1;
        s = '0' + s;
        for(ll i=s.size()-1; i>=0; i--){
            if(s[i]>='5'){
                s[i-1] += 1;
                pos = i;
            }
        }
        for(ll i=pos; i<s.size(); i++){
            s[i] = '0';
        }
        while(true){
            if(s[0]!='0'){
                break;
            }else{
                s.erase(s.begin());
            }
        }
        cout << s << endl;
    }
    return 0;
}