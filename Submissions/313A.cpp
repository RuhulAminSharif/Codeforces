#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s; cin >> s;
    if(s[0]=='-'){
        int a = s[s.size()-1]-'0';
        int b = s[s.size()-2]-'0';
        s.pop_back();
        s.pop_back();
        if(a<b) s.push_back((a+'0'));
        else s.push_back((b+'0'));
    }
    if(s=="-0") s = "0";
    cout << s << endl;
    return 0;
}
