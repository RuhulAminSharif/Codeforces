#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n" 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    string team[n];
    for(int i=0; i<n; i++){
        cin >> team[i];
    }
    string team1 = team[0], team2, ans;
    int goal = 0;
    for(int i=0; i<n; i++){
        if(team[i]==team1){
            goal+=1;
        }else{
            team2 = team[i];
        }
    }
    if(goal>(n-goal)) ans = team1;
    else ans = team2;
    cout << ans << endl;
    return 0;
}