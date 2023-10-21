#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int y, w; cin >> y >> w;
    string ans[] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    cout << ans[max(y,w)] << endl;
    return 0;
}