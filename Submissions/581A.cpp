#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n" 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b ; cin >> a >> b;
    cout << min(a,b) << " " << (max(a,b)-min(a,b))/2 << endl;
    return 0;
}