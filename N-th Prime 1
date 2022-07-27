#include <iostream>
#include <vector>

using namespace std;

//Driver code
int main()
{
#define max_size  8000000
    long long int n, cnt = 0;
    cin >> n;
    vector<bool>isPrime(max_size+1, true);

    for(long long int i=2; i<=max_size; i++)
    {
        if(isPrime[i])
        {
            cnt++;
            if(cnt==n)
            {
                cout << i << endl;
                break;
            }
            for(long long int j=i*i; j<=max_size; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    return 0;
}
