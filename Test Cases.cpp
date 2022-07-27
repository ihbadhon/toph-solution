#include <iostream>

using namespace std;

//Driver code
int main()
{
    int n, cpuL, memL,diff, cpu_use, mem_use;
    cin >> n >> cpuL >> memL;
    bool flag = true;
    int a=2;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=1; j++)
        {
            cin >> diff >> cpu_use >> mem_use;

            if(cpu_use>cpuL)
            {
                cout << "CLE" << endl;
                flag = false;

                break;
            }
            else if(mem_use>memL)
            {
                cout << "MLE" <<endl;
                flag = false;
                break;
            }
            if(diff != 0)
            {
                cout << "WA" << endl;
                flag = false;
                break;
            }
        }
        if(!flag)
        {
            break;
        }
    }
    if(flag)
    {
        cout << "AC" << endl;
    }

    return 0;
}
