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
    while (t--)
    {
        int n;
        cin >> n;
        int x = 4;
        if(n <= 1399){
            x = 4;
        }else if(n <= 1599){
            x = 3;
        }else if(n <= 1899){
            x = 2;
        }else x = 1;
        cout << "Division " << x << endl;
    }
    return 0;
}