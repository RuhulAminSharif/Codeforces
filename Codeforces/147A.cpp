#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s, ans;
    getline(cin, s);
    for(ll i=0; i<s.size();){
        if(s[i]=='.'||s[i]==','||s[i]=='!'||s[i]=='?'){
            while(ans.back()==' '){
                ans.pop_back();
            }
            ans += s[i];
            ans += ' ';
            while(i<s.size()&&!(s[i]>='a'&&s[i]<='z')){
                i++;
            }
        }else if(s[i]==' '){
            ans += s[i];
            while(s[i]==' '){
                i++;
            }
        }else{
            ans += s[i++];
        }
    }
    cout << ans << endl;
    return 0;
}