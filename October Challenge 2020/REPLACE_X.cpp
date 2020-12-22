#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>

using namespace std;

void replace_X(){
    int n, x, p, k, i, t, count = 0;
    vector<int> a;
    cin >> n >> x >> p >> k;

    for(i=0; i<n; ++i){
        cin >> t;
        a.push_back(t);
    }

    vector<int> b;
    b = a;

    sort(b.begin(), b.end());

    srand(time(0));
    while(true){
        if((x < b[0] && p!=1) || x > b[n-1]){
            cout << -1 << endl;
            return;
        }
        if(x <= b[k-1]){
            cout << b[k-1] << endl;
            b[k-1] = rand()%x;
            cout << b[k-1] << endl;
            sort(b.begin(), b.end());
            count++;
        }
        if(x <= b[p-1]){
            cout << count << endl;
            return;
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--){
        replace_X();
    }
    return 0;
}
