#include <iostream>
#include <vector>

using namespace std;


//Driver code
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    vector<bool>isPrime(7500000+1, true);

    for(int i=2; i*i <=7500000; i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i; j<=7500000; j+=i)
            {
                isPrime[j] = false;
            }
        }
    }
    for(int i=2; i <=7500000; i++)
    {
        if(isPrime[i])
        {
            cnt++;
            if(cnt==n)
            {
                cout << i << endl;
                break;
            }

        }
    }

    return 0;
}
