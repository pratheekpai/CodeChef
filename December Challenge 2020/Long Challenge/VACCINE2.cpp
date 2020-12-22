#include <bits/stdc++.h>

using namespace std;

void vaccine_distribution(){
    int no_of_people, d, i, days_required = 0, people_at_risk = 0, people_not_at_risk = 0;
    cin >> no_of_people >> d;
    int a[no_of_people];
    for(i=0; i<no_of_people; ++i){
        cin >> a[i];
        if(a[i] >= 80 || a[i] <= 9)
            people_at_risk++;
    }
    people_not_at_risk = no_of_people - people_at_risk;

    if(people_at_risk % d == 0)
        days_required += (people_at_risk / d);
    else
        days_required += (people_at_risk / d) + 1;

    if(people_not_at_risk % d == 0)
        days_required += (people_not_at_risk / d);
    else
        days_required += (people_not_at_risk / d) + 1;


    cout << days_required << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        vaccine_distribution();
    }
    return 0;
}
