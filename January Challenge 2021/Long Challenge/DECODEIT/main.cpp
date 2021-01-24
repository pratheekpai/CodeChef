
#include <bits/stdc++.h>

using namespace std;

int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}

void encoded_string(){
    int n, x, i;
    string s, s1;
    char p[10];
    cin >> n;
    cin >> s;
    for(i=0; i<n; i+=4){
        s.copy(p, 4, i);
        p[4] = '\0';
        x = binaryToDecimal(p);
        s1 += (char)x+97;
    }
    cout << s1 << endl;

}
int main(){

    long t;
    cin >> t;
    while(t--){
        encoded_string();
    }
    return 0;
}
