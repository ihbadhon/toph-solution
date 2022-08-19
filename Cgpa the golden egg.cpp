#include <bits/stdc++.h>

using namespace std;
#define ll long long int

//Driver code
int main()
{
    int tc, test=1;
    cin >> tc;

    while(tc--){
        int c, fail=0;
        double ans = 0, total_credit=0;
        cin >> c;
        for(int i=0; i<c; i++){
            double mark, credit;
            cin >> mark >> credit;
            if(mark>=80) ans += 4*credit;
            else if(mark>=75) ans += 3.75*credit;
            else if(mark>=70) ans += 3.50 * credit;
            else if(mark>=65) ans += 3.25 * credit;
            else if(mark>=60) ans += 3.00 * credit;
            else if(mark>=55) ans += 2.75 * credit;
            else if(mark>=50) ans += 2.50 * credit;
            else if(mark>=45) ans += 2.25 * credit;
            else if(mark>=40) ans += 2.00 * credit;
            else fail++;

            total_credit += credit;
        }
        cout << "Case " << test++ << ": " ;

        if(fail!=0){
            if(fail==1){
                cout << "Sorry, you have failed in 1 course!" << endl;
            }
            else {
                cout << "Sorry, you have failed in " << fail << " courses!" << endl;
            }
        }
        else{
            cout << setprecision(2) << fixed <<  ans/total_credit << endl;
        }
    }
    return 0;
}
