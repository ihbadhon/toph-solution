#include <iostream>
#include <string>

using namespace std;

//Driver code
int main()
{
    int prnths = 0, curly=0, squre=0;
    bool flag = true;
    string str;
    cin >> str;

    for(int i=0; i<str.size(); i++){

            if(prnths<0 || curly<0 || squre<0){
                cout << "No" << endl;
                flag = false;
                break;
            }

        if(str[i] == '('){
            prnths++;
           }
           else if(str[i]== ')'){
            prnths--;
            if(prnths>0){
                if(curly>0 || squre>0){
                    cout << "No" << endl;
                    flag = false;
                    break;
                }
            }
           }
           else if(str[i]=='{'){
            curly++;
           }
           else if(str[i]== '}'){
            curly--;
            if(curly>0){
                if(prnths>0 || squre>0){
                    cout << "No" << endl;
                    flag = false;
                    break;
                }
            }
           }
           else if(str[i]== '['){
            squre++;
           }
           else if(str[i]== ']') {
            squre--;
            if(squre>0){
                if(prnths>0 || curly>0){
                    cout << "No" << endl;
                    flag = false;
                    break;
                }
            }
           }

    }

    if(flag){
            if(prnths==0 && curly==0 && squre==0){
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
    }
    return 0;
}
