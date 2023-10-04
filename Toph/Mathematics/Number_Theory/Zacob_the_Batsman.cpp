#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        if(n%2==0&&n!=2){
            cout<<"Zacob Zacob!"<<endl;
        }
        else{
            cout<<"Sorry Zacob!"<<endl;
        }
    }
    return 0;
}