
#include <bits/stdc++.h>

using namespace std;

void point_of_impact(){
    long long n, k, i, x, y, p;
    cin >> n >> k >> x >> y;
    if(x == y){
        cout << n << " " << n << endl;
    }
    else if(y < x){
        if(x == n && y == 0){
            cout << x << " " << y << endl;
        }
        else {
            p = n - x;
            switch(k%4){
                case 1: cout << n << " " << y+p << endl;
                        break;
                case 2: cout << y+p << " " << n << endl;
                        break;
                case 3: cout << 0 << " " << n - (y+p) << endl;
                        break;
                default: cout << n - (y+p) << " " << 0 << endl;
                        break;
            }
        }
    }
    else if(x < y){
        if(x == 0 && y == n){
            cout << 0 << " " << y << endl;
        }
        else {
                p = n - y;
                switch(k%4){
                    case 1: cout << x+p << " " << n << endl;
                            break;
                    case 2: cout << n << " " << x+p << endl;
                            break;
                    case 3: cout << n - (x+p) << " " << 0 << endl;
                            break;
                    default: cout << 0 << " " << n - (x+p) <<endl;
                            break;
                }
        }
    }

}
int main(){
    long t;
    cin >> t;
    while(t--){
        point_of_impact();
    }
    return 0;
}

