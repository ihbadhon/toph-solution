#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define mx 100000

vector<bool> v (mx+1, true);
vector<int> primes;

void sieve()
{
    v[0]=v[1] = false;
    for(ll i=2; i<=mx; i++)
    {
        if(v[i])
        {
            primes.push_back(i);
            for(ll j=i*i; j<=mx; j += i)
            {
                v[j] = false;
            }
        }
    }
}


//Driver code
int main(void)
{
    int tc, test=1;
    cin >> tc;
    map<char, int> mp;
    sieve();

    while(tc--)
    {
        ll n;
        cin >> n;
        string str = "";
        for(ll i=0; i<n; i++)
        {
            char c ;
            cin >> c;
            mp[c]++;
        }

        cout << "Case " << test++ << ":" << endl;

        int got = 0;
        for(const auto &entry:mp)
        {
            if(binary_search(primes.begin(), primes.end(), entry.second))
            {
                cout << entry.first << " = " << entry.second << endl;
                got = 1;
            }
        }
        if(!got)
        {
            cout << "Love is painful !" << endl;
        }
        mp.clear();
    }


    return 0;
}
