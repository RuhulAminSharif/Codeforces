#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    string s,ans; cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='-'&&s[i+1]=='-'){
            ans+='2';
            i+=1;
        }
        else if(s[i]=='-'&&s[i+1]=='.'){
            ans+='1';
            i+=1;
        }
        else{
            ans+='0';
        }
    }
    cout << ans << endl;
    return 0;
}

