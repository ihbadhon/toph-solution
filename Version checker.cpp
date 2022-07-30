#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Driver code
int main()
{
    string str1, str2;
    bool flag = true;
    cin >> str1 >> str2;

    while(flag){
        int t =0;
        vector<int> v1, v2;
        for(int i=0; i<str1.size(); i++){
            if(str1[i] != '.'){
                t += str1[i] - '0';
            }
            else{
                v1.push_back(t);
                t=0;
            }
        }
        if(str1[str1.size()-1] != '.'){
            v1.push_back(t);
            t=0;
        }

        for(int i=0; i<str2.size(); i++){
            if(str2[i] != '.'){
                t += str2[i] - '0';
            }
            else{
                v2.push_back(t);
                t=0;
            }
        }
        if(str2[str2.size()-1] != '.'){
            v2.push_back(t);
            t=0;
        }
        bool got = true;

        for(int i=0; i<v1.size(); i++){
            int t1 = v1[i];
            int t2 = 0;
            if(i<v2.size()){
                t2 = v2[i];
            }
            if(t1>t2){
                cout << str1 << endl;
                got = false;
                break;
            }
            else if(t1<t2){
                cout << str2 << endl;
                got = false;
                break;
            }
        }

        if(got){
            if(v1.size()>v2.size()){
                cout << str1 << endl;
            }
            else {
                cout << str2 << endl;
            }
        }

        flag = false;
    }
    return 0;
}
