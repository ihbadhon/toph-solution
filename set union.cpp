#include <iostream>
#include <set>

using namespace std;

//Driver code
int main()
{
    int n, m,val;
    cin >> n >> m;

    set<int> take_val;
    set<int>::iterator it;

    for(int i=1; i<=n+m; i++)
    {
        cin >> val;
        take_val.insert(val);
    }

    it = take_val.begin();
    int i =0;

    while(it != take_val.end())
    {

        if(i)
        {
            cout << " ";
        }
        cout << *it;
        i++;
        it++;

    }

    return 0;
}
