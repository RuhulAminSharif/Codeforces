#include<iostream>
#include<string>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int a=0, b=0, ans=9;
        for(int i=0; i<s.size(); i++){
            if(i&1) a += s[i]=='1';
            else b += s[i]!='0';
            if(a > b + (9-i)/2) ans = min(ans, i);
            if(b > a+(10-i)/2) ans = min(ans,i);
        }
        a=0, b=0;
        for(int i=0; i<s.size(); i++){
            if(i&1) a += s[i]!='0';
            else b += s[i]=='1';
            if(a > b + (9-i)/2) ans = min(ans, i);
            if(b > a+(10-i)/2) ans = min(ans,i);
        }
        cout << ans+1 << endl;
    }
    return 0;
}
