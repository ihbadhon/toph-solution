#include <bits/stdc++.h>

using namespace std;
#define ll long long int

//Driver code
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a>b+c)
        {
            cout << "No" << endl;
            continue;
        }
        if(b>a+c)
        {
            cout << "No" << endl;
            continue;
        }
        if(c>a+b)
        {
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;

        //return 0;
    }
}
