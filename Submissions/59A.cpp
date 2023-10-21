#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    int upper=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            upper+=1;
        }
    }
    if(upper>(s.size()-upper)){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl; 
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }
    return 0;
}