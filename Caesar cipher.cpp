#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;


string encrypt(int s, string text)
{
    string result = "";
    int update;

    //traverse text
    for(int i=0; i<text.size(); i++){
        //apply transformation to each character
        //encrypt lower case letter
        //result += char(int(text[i] + s -97)%26 +97);
        if(isspace(text[i])){
                result += text[i];
            continue;
        }
        update= (text[i] - s);
        if(update<97){
            result += (update + 26);
        }
        else {
            result += update;
        }

        //return the resulting string
    }
    return result;
}


//Driver code
int main()
{

 int s;
    cin >> s;
    cin.ignore();
    string text;
    getline(cin, text);
    cout << encrypt(s, text);
    return 0;
}
