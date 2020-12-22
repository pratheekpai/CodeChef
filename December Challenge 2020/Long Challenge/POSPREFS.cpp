#include <bits/stdc++.h>

using namespace std;

void positive_prefixes(){
    int n, k, i, p=0, j;
    cin >> n >> k;
    int a[n+1];
    if(n%2 == 0){
        for(i=1; i<=n; ++i){
            if(i%2==0){
                a[i] = i;
                p++;
                continue;
            }
            a[i] = -i;
        }
        if(p<k){
            j = i-2;
            for(i=p; i<k; ++i, j-=2){
                a[j] = j;
            }
        }
        else{
            j = i-1;
            for(i=p; i>k; --i, j-=2){
                a[j] = -j;
            }
        }
    }
    else if(n%2!=0){
        for(i=1; i<=n; ++i){
            if(i%2!=0){
                a[i] = i;
                p++;
                continue;
            }
            a[i] = -i;
        }
        if(p<k){
            j = i-2;
            for(i=p; i<k; ++i, j-=2){
                a[j] = j;
            }
        }
        else{
            j = i-1;
            for(i=p; i>k; --i, j-=2){
                a[j] = -j;
            }
        }
    }
    for(i=1; i<=n; ++i){
        cout << a[i] << " ";
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        positive_prefixes();
    }
    return 0;
}
