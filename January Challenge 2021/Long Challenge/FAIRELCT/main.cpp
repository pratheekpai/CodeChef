#include <bits/stdc++.h>

using namespace std;

void fair_elections(){
    long n, m, p, i, temp, flag =0, sum=0, sum1=0, swaps = 0, q, j, k;
    cin >> n >> m;
    vector<long> a;
    vector<long> b;
    for(i=0; i<n; ++i){
        cin >> p;
        a.push_back(p);
    }
    for(i=0; i<m; ++i){
        cin >> p;
        b.push_back(p);
    }
    sum = accumulate(a.begin(), a.end(), 0);
    sum1 = accumulate(b.begin(), b.end(), 0);

    if(sum > sum1){
        cout << 0 << endl;
    }
    else{
        while(true){
            p = *min_element(a.begin(), a.end());
            q = *max_element(b.begin(), b.end());
            j = find(a.begin(), a.end(), p) - a.begin();
            k = find(b.begin(), b.end(), q) - b.begin();
            temp = a[j];
            a[j] = b[k];
            b[k] = temp;
            swaps++;
            sum = accumulate(a.begin(), a.end(), 0);
            sum1 = accumulate(b.begin(), b.end(), 0);
            if(sum > sum1){
                cout << swaps << endl;
                break;
            }
            if(swaps == min(n,m)){
                flag = 1;
                break;
            }

        }
    }
    if(flag == 1){
        cout << -1 << endl;
    }
}
int main(){

    long t;
    cin >> t;
    while(t--){
        fair_elections();
    }
    return 0;
}
