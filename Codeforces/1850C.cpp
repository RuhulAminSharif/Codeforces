#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve(void)
{
    char ch[8][8];
    int idx1=-1, idx2;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin >> ch[i][j];
            if(idx1==-1 && ch[i][j]!='.'){
                idx1 = i;
                idx2 = j;
            }
        }
    }
    string ans="";
    for(int i=idx1; i<8; i++){
        if(ch[i][idx2]>='a' && ch[i][idx2]<='z'){
            ans += ch[i][idx2];
        }
    }
    cout << ans << endl;
    return ;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}