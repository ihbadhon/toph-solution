
#include <iostream>

using namespace std;

//Driver code
int main()
{
    long long int n;
    cin >> n;
    bool flag = true;

    for(long long int i=2; i<n; i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}


// Or You can use below program
/* 
#include <iostream>
#include <vector>

using namespace std;

//Driver code
int main()
{
    long long int n,i;
    cin >> n;
    vector<bool>isPrime(n+1, true);

    for(i=2; i<=n; i++){
        if(isPrime[i]){
                if(i==n){
                    cout << "Yes" << endl;
                    break;
                }
            for(long long int j= i*i; j<=n; j+=i){
                isPrime[j] = false;
            }
        }
    }
if(i!=n){
    cout << "No" << endl;
}
    return 0;
}
*/
