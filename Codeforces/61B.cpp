#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mod =  998244353;
string trim(string x)
{
    string xx;
    for(auto u : x){
        if(u!='-'&&u!=';'&&u!='_'){
            if(u>='A'&u<='Z') xx+=(u-'A'+'a');
            else xx+=u;
        }
    }
    return xx;
}
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s[3], p[6], tmp;
    for(int i=0; i<3; i++){
        cin >> s[i];
        s[i]=trim(s[i]);
    }
    p[0]=s[0]+s[1]+s[2];
    p[1]=s[0]+s[2]+s[1];
    p[2]=s[1]+s[0]+s[2];
    p[3]=s[1]+s[2]+s[0];
    p[4]=s[2]+s[1]+s[0];
    p[5]=s[2]+s[0]+s[1];
    int n; cin >> n;
    for(int i=0; i<n; i++){
        cin >> tmp;
        tmp = trim(tmp);
        bool fg = false;
        for(int i=0; i<6; i++){
            if(tmp==p[i]) fg = true;
        }
        if(fg) cout << "ACC" << endl;
        else cout << "WA" << endl;
    }
    return 0;
}
