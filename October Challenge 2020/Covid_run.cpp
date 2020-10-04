#include <iostream>

using namespace std;

void covid_run(){
    int n, k, x, y, counter, gcd;

    cin >> n >> k >> x >> y;
    counter = x;

    // if(n==1 && x==y){                                            logically correct cases but not needed for the problem
    //     cout << "YES\n";
    //     return;
    // }

    // if(n==1 && x!=y){
    //     cout << "NO\n";
    //     return;
    // }

    // if(k==0 && x==y){
    //     cout << "YES\n";
    //     return;
    // }

    if(k>n) k = k % n;                                            // if the covid jump number (refer the problem) is more than the given houses(n) it is converted to a valid jump 

    if(k==0 && x!=y){                                             // if the covid jump(k) is 0 and the start house(x) is not your house(y)
        cout << "NO\n";
        return;
    }


    if(n % 2 == 0 && k % 2 == 0){                                 // if the given number of houses and the covid jump(k) is even then there is a loop made by the covid which affects only certain houses in the loop
        while(true){
            if(counter == y){                                     // if your house(y) comes in the loop
                cout << "YES\n";
                return;
            }   
            counter = (counter + k) % n;                          // updating counter of covid 
            if(counter == x){                                     // if the loop starts again we have to exit it
                cout << "NO\n";
                return;
            }
        }
    }

    if(n % k == 0){                                                // (another type of loop) if the number of jumps(k) divides the no. of houses(n) it creates a loop  
        for(int i=1; i<=n/k; ++i){
            if(counter == y){
                cout << "YES\n";
                return;
            }
            counter = (counter + k) % n;
        }
        cout << "NO\n";
        return;
    }

    gcd = gcd_fast(n, k);                                          // (another type of loop) if n and k have a common divisor it creates another type of loop 

    if(gcd != 1){
        while(true){
            if(counter == y){
                cout << "YES\n";
                return;
            }
            counter = (counter + k) % n;
            if(counter == x){
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";                                                // this YES is for those cases where there is no loop and eventually the counter will land surely land on your house(y) 
}

int gcd_fast(int a, int b) {                                        // to calculate gcd using euclid's method
  int m, n, rem;
  m = a;
  n = b;

  while (n != 0) {
        rem  = m % n;
        m = n;
        n = rem;
  }
 return m;
}


int main()
{
    int t;
    cin >> t;

    while(t--){
        covid_run();
    }

    return 0;
}
