#include <bits/stdc++.h>

using namespace std;

void chef_div_3(){
    long long i, n, k, p, d, sum = 0,count = 0;
    cin >> n >> k >> d;
    long long a[n];
    for(i=0; i<n; ++i){
        cin >> p;
        a[i] = p;
        sum += p;
    }
    if(sum / k >= d){
        cout << d << endl;
    }
    else {
        cout << sum / k << endl;
    }
}
int main(){

    long t;
    cin >> t;
    while(t--){
        chef_div_3();
    }
    return 0;
}
