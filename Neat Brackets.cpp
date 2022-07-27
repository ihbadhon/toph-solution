#include <iostream>
#include <string>

using namespace std;

//Driver code
int main()
{
    string str;
    cin >> str;
    int cnt = 0;
    bool flag = true;

    for(int i=0; i<str.size(); i++){
            if(cnt<0){
                cout << "No" << endl;
                flag = false;
                break;
            }
        if(str[i] == '('){
            cnt++;
           }
           else if(str[i] == ')'){
            cnt--;
           }
    }

  if(flag){
    if(cnt==0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
  }
    return 0;
}
