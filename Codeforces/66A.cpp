#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll c;
    if(cin>>c){
        if(c<=127)cout<<"byte";
        else if(c<=32767)cout<<"short";
        else if(c<=2147483647LL)cout<<"int";
        else if(c<= LLONG_MAX)cout<<"long";
    }else cout<<"BigInteger";
    cout<<endl;
    return 0;
}