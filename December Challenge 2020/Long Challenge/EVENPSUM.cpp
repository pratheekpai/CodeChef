#include <bits/stdc++.h>

using namespace std;

//void even_pair_sum_alternate(){
//    long long a, b;
//    cin >> a >> b;
//    long long c = ceil((double)(a*b) / 2);
//    cout << c << endl;
//}

void even_pair_sum(){
    long long a, b, c;
    cin >> a >> b;
    if((a*b) % 2 == 0){
        c = (a*b) / 2;
    }
    else
        c = (a*b) / 2 + 1;
    cout << c << endl;
}
void even_pair_sum_brute(){
    long long a, b, n=0;
    cin >> a >> b;
    for(long long i=1; i<=a; ++i){
        for(long long j=1; j<=b; ++j){
            if((i+j) % 2 == 0){
                ++n;
            }
        }
    }
    cout << n << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        even_pair_sum();
        even_pair_sum_brute();
    }
    return 0;
}
