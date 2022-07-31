/* Badhon chowdhury*/

#include <iostream>
#include <string>

using namespace std;

//Driver code
int main()
{
    string str;
    while(cin>>str)
    {
        int sl=0, cl =0, num=0, cnt=0;

        for(int i=0; i<str.size(); i++)
        {

            if(str[i]>='a' && str[i]<='z')
            {
                sl = 1;
            }
            else if(str[i]>='A' && str[i]<='Z')
            {
                cl = 1;
            }
            else if(str[i]>='0' && str[i]<='9')
            {
               num = 1;
            }

            if(sl&&cl&&num)
            {
                cnt++;
                sl = 0;
                cl=0;
                num=0;
            }
        }
        cout << cnt << endl;
    }


}
