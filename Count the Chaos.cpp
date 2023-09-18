/*// Ih Badhon Chowdhury //*/

#include <bits/stdc++.h>

using namespace std;
//mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// mt19937_64 (long long)
//
//auto my_rand(long long l,long long r)
//{
  //  return uniform_int_distribution<long long>(l,r)(rng);
//}
//#ifndef ONLINE_JUDGE
//#include "debug.h"
//#else
//#define dbg(...) 42
//#endif
//
#define  ll       long long int
#define  ld       long long double
#define  sp       " "
#define  pb       push_back
#define  cinv(v)  for(auto &i:v) cin >> i;
#define  vi       vector<int>
#define  vii      vector<ll>
#define  cout(v)  for(auto e:v) cout << e << sp;
#define  M        1e5
#define  yes      cout << "YES" << endl
#define  no       cout << "NO" << endl
#define  case     "Case " << test++ << ": "
#define  all(v)   v.begin(), v.end()
#define  Faster   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define  nl       "\n"

///.........Bit_Manipulation...........///
#define MSB(mask) 63-__builtin_clzll(mask)  /// 0 -> -1
#define LSB(mask) __builtin_ctzll(mask)  /// 0 -> 64
#define ONE(mask) __builtin_popcountll(mask)
#define CHECK(mask,bit) (mask&(1LL<<bit))
#define ON(mask,bit) (mask(1LL<<bit))
#define OFF(mask,bit) (mask&~(1LL<<bit))
#define CHANGE(mask,bit) (mask^(1LL<<bit))
#define LOG2(x) (__builtin_clz(x) ^ 31)
#define LSB1(mask) (__builtin_ffs(mask) - 1)

#define STRING_TO_INT(mask) (std::bitset<64>(mask).to_ullong())
///................Graph's Move.................
///const int dx[] = {+1,-1,+0,+0}; ///Rock's Move
///const int dy[] = {+0,+0,+1,-1}; ///Rock's Move
///const int dx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's Move
///const int dy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int dx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's Move
///const int dy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's Move
///*.....................-_-........................*///

template<class T>
struct Segtree
{
#define segtre int m=(x+y)>>1,lu=2*u,ru=2*u+1
    struct data
    {
        T l,v;
        data()
        {
            this->l=0;
            this->v=0;
        }
        data(T l,T v)
        {
            this->l=l;
            this->v=v;
        }
    };
    vector<T>ara;
    vector<data>t;
    int n;
    
    Segtree(){}
    Segtree(int n)
    {
        this->n=n;
        t=vector<data>(4*n);
    }
    
    void Init(vector<T>vec)
    {
        this->ara=vec;
        Init(1,0,n-1);  /// check 0 or 1 indexed
    }
    void Update(int l,int r,T val)
    {
        Update(1,0,n-1,l,r,val);   /// check 0 or 1 indexed
    }
    data Query(int l,int r)
    {
        return Query(1,0,n-1,l,r);    /// check 0 or 1 indexed
    }
    void Updatelazy(int u,int x,int y)
    {
        t[u].v+=(t[u].l*(y-x+1));
        if(x!=y)
        {
            t[2*u].l+=t[u].l;
            t[2*u+1].l+=t[u].l;
        }
        t[u].l=0;
    }
    data Combine(data a,data b)
    {
        data temp;
        temp.v=a.v+b.v;
        return temp;
    }
    void Init(int u,int x,int y)
    {
        if(x==y)
        {
            t[u].v=ara[x];
            return;
        }
        segtre;
        Init(lu,x,m);
        Init(ru,m+1,y);
        t[u]=Combine(t[lu],t[ru]);
    }
	
    void printTree() {
        for (int i = 0; i < t.size(); ++i) {
            cout << "t[" << i << "].v = " << t[i].v << ", t[" << i << "].l = " << t[i].l << endl;
        }
    }
    void Update(int u,int x,int y,int b,int e,T val)
    {
        //if(t[u].l)
            //Updatelazy(u,x,y);
        if(x>e||y<b)
            return;
        if(x>=b&&y<=e)
        {
            t[u].v+=val;
            return;
        }
        segtre;
        Update(lu,x,m,b,e,val);
        Update(ru,m+1,y,b,e,val);
        t[u]=Combine(t[lu],t[ru]);
    }
    data Query(int u,int x,int y,int b,int e)
    {
        //if(t[u].l)
            //Updatelazy(u,x,y);
        if(x>e||y<b)
            return data();
        if(x>=b&&y<=e)
            return t[u];
        segtre;
        data res1=Query(lu,x,m,b,e);
        data res2=Query(ru,m+1,y,b,e);
        return Combine(res1,res2);
    }
};

// Driver Code
int main()
{
    Faster;
    ll tc = 1, test = 1;
    //cin >> tc;
    while(tc--)
    {
        int n;
        cin >>n;
        vi v(n);
        cinv(v);
        Segtree<int> tree(n);
        ll ans = 0;
        for(int i=0; i<n; i++){
          ans += tree.Query(v[i], n-1).v;
          tree.Update(v[i]-1, v[i]-1, 1);
        }

        cout << ans << nl;
    }
}
