#include <bits/stdc++.h>

using namespace std;

void chef_attendance(){
    int n, i, count = 0;
    cin >> n;
    string s;
    cin >> s;
    int y;
    for(i=0; i<n; ++i){
        if(s[i] == '1')
            count++;
    }
    int x;
    x = 120 - n;
    if(x+count >= 90)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main(){

    int t;
    cin >> t;
    while(t--){
        chef_attendance();
    }
    return 0;
}
