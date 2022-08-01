#include <iostream>
#include <string>

using namespace std;

//Driver code
int main()
{
    int t;  //test cases
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        
        string str;
        cin >> str; // only include 0 or 1

        int cnt=0, weak_val = 0;
        
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='0')
            {
                weak_val++;
            }


            if(str[i]=='1')
            {
                if(weak_val%2==1) // check if the player is weak or not
                {
                    cnt++;  // count how many player you can kill
                    weak_val=0;
                }
            }

        }
        cout << cnt << endl;

    }


    return 0;
}
