#include <bits/stdc++.h>

using namespace std;

void police_thief(){
    long long x, y, k, n, flag = 0;
    cin >> x >> y >> k >> n;
    if(x < y){
        while(true){
            x += k;
            y -= k;
            if(x > y){
                flag = 0;
                break;
            }
            if(x == y){
                flag = 1;
                break;
            }
        }

    }
    else if(x > y){
        while(true){
            x -= k;
            y += k;
            if(y > x){
                flag = 0;
                break;
            }
            if(x == y){
                flag = 1;
                break;
            }
        }
    }
    else
        flag = 0;

    if(flag == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main(){

    int t;
    cin >> t;
    while(t--){
        police_thief();
    }
    return 0;
}

