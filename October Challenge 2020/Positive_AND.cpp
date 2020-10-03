#include <bits/stdc++.h>
#include <math.h>

using namespace std;

void beautiful_permutation(){
    int n, flag, i;
    cin >> n;

    vector<int> p(n);
    for(i = 1; i <= n; ++i){
        p[i-1] = i;
    }

    if(n==1){                                   // Constraint (boundary case)
        cout << 1 << endl;
        return;
    }

    if(ceil(log2(n)) == floor(log2(n))){        // In the resulting permutations of powers of 2, one of the bitwise AND with a power of 2 and (power of 2) - 1 will give 0
        cout << -1 << endl;                     // Hence permutations of powers of 2 wont satisfy the condition in the problem
        return;
    }

    if(n<=9){                                   // A pattern starts after permutations of 9 so, this if is one of the sub tasks
        do{
            flag = 1;
            for(i=0; i<n-1; ++i){
                if(!((p[i] & p[i+1]) > 0)){     // The given condition to be a 'Beautiful Permutation'
                    flag = 0;
                    break;
                }

            }
            if(flag == 1){
                for(i=0; i<n; ++i)
                    cout << p[i] << " ";
                cout << endl;
                return;
            }
        }while(next_permutation(p.begin(), p.end()));   // next_permutation(start of the arry, end of the array) gives all of the permutations of the given array
    }
    else{                                                         // for n >= 10
        vector<int> a = {1, 3, 2, 6, 4, 5, 7, 9, 8, 10};          // this is the result for 10 and it stays stays with all the first satisfied permutations of n > 10 
                                                                  
        for(i=0; i<10; ++i)
            cout << a[i] << " ";

        if(n>10){                                               // after 10 its just the successive numbers uptil n 
            for(i=11; i<=n; ++i){
                if(ceil(log2(i)) == floor(log2(i))){            // but, in the pattern whenever a power of 2 comes we have to swap it with the next number for example
                    cout << i+1 << " " << i << " ";             // if n = 18, resulting first beautiful permutation will be 1,3,2,6,4,5,7,9,10,11,12,13,14,15,17,16,18
                    i += 1;                                     // this is the first beautiful permutation for 18 there might be more but we need only 1 because it has a pattern
                }
                else
                    cout << i << " ";
            }
        }

        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        beautiful_permutation();
    }
    return 0;
}


