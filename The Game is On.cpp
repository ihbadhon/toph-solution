#include <iostream>
#include <string>

using namespace std;

//Driver code
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        
        string str;
        cin >> str;

        int cnt=0, weak_val = 0;
        
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='0')
            {
                weak_val++;
            }


            if(str[i]=='1')
            {
                if(weak_val%2==1)
                {
                    cnt++;
                    weak_val=0;
                }
            }

        }
        cout << cnt << endl;

    }


    return 0;
}
