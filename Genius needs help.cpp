#include <bits/stdc++.h>

using namespace std;
#define ll long long int

string work(string s1, string s2)
{
    int size1 = s1.size() - 1;
    int size2 = s2.size() - 1;
    int carry = 0;
    string sum = "";

    while(size1>=0 || size2>=0)
    {
        int digit1 = (size1>=0) ? s1[size1]- '0' : 0;
        int digit2 = (size2>=0) ? s2[size2] - '0' : 0;
        int d = digit1 + digit2 + carry;
        carry = d/10;
        d %= 10;
        sum += ('0' + d);
        size1--, size2--;

    }
    if(carry) sum += ('0' + carry);

    while(sum.size()>1 && sum.back()=='0') sum.pop_back();

    reverse(sum.begin(), sum.end());

    return sum;
}


//Driver code
int main()
{
    ll tc, test=1;
    cin >> tc;

    while(tc--)
    {
        string str1, str2;
        cin >> str1 >> str2;

        cout << "Case #" << test++ << ": " << work(str1, str2) << endl;

    }

    return 0;
}
