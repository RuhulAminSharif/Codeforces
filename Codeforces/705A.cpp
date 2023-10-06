#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
	cin >> n;
	for(int i=0; i<n; i++){
		if(i % 2)
			cout << "I love ";
		else
			cout << "I hate ";
		if(i + 1 == n)
			cout << "it" << endl;
		else
			cout << "that ";
	}
    return 0;
}