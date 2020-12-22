#include <bits/stdc++.h>
#include <fstream>
#include <string.h>
#include <conio.h>


using namespace std;

void vaccine_production(){
    int d1, d2, v1, v2, x, y, w, z, p, no_of_days = 0, sum = 0;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    w = v1 + v2;
    if(d1 == d2){
        no_of_days += d1-1;
        while(true){
            sum += w;
            no_of_days++;
            if(sum >= p){
                cout << no_of_days;
                return;
            }
        }
    }
    x = min(d1, d2);
    y = max(d1, d2);
    w = v1 + v2;
    z = y - x;
    no_of_days += x - 1;
    if(x == d1){
        for(int i=0; i<z; ++i){
            sum+= v1;
            no_of_days++;
            if(sum >= p){
                cout << no_of_days;
                return;
            }
        }
    }
    else{
        for(int i=0; i<z; ++i){
            sum+= v2;
            no_of_days++;
            if(sum >= p){
                cout << no_of_days;
                return;
            }
        }
    }

    while(true){
        sum += w;
        no_of_days++;
        if(sum >= p){
            cout << no_of_days;
            return;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        vaccine_production();
    }
    return 0;
}
