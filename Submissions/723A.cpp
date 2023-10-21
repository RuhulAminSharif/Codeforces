#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n" 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a[3]; cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    cout << a[2]-a[0] << endl;
    return 0;
}