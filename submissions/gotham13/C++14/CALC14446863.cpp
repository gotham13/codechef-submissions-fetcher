//ABHINAV GAUTAM (gotham13121997)
#include <bits/stdc++.h>
using namespace std;
#define getC(n) scanf("%c",&n)
#define getL(n) scanf("%ld",&n)
#define getLL(n) scanf("%lld",&n)
#define getULL(n) scanf("%llu",&n)
#define getD(n) scanf("%lf",&n)
#define getI(a) scanf("%d", &a) 
#define getII(a,b) scanf("%d%d", &a, &b)
#define getIII(a,b,c) scanf("%d%d%d", &a, &b, &c)
#define getIIII(a,b,c,d) scanf("%d%d%d%d", &a, &b, &c, &d)
#define putI(a) printf("%d", a)
#define putIn(a) printf("%d\n", a)
#define FOR(i,L,R) for (int i = L; i < R; i++) 
#define FORE(i,L,R) for (int i = L; i <= R; i++)
#define FORD(i,L,R) for (int i = L; i > R; i--)
#define FORDE(i,L,R) for (int i = L; i >= R; i--)
#define FORIT(c,v)  for (auto &c: v)
#define whileT int T; getI(T); while(T--)
#define mem(a,x) memset(a,x,sizeof(a))
#define CMP(a,b) ((a) > (b) ? mp((a),(b)) : mp((b),(a)))
#define ALL(c) (c).begin(),(c).end()
#define PRESENT(c,x) ((c).find(x) != (c).end()) 
#define ll long long 
#define ull unsigned long long
#define fs first
#define sd second
#define pb push_back
#define mp make_pair
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef vector<pii> vpii; 
int main()
{
    map<pair<ll,ll>,ull> m1;
    ll n,b;
    whileT
    {
        getLL(n);
        getLL(b);
        if(b>=n)
        {
            cout<<"0"<<endl;
            continue;
        }
        if(b>=n/2)
        {
            putIn(n-b);
            continue;
        }
        if(m1[mp(n,b)]!=0)
        {
            putIn(m1[mp(n,b)]);
            continue;
        }
        ull max=0;
        FORE(i,1,n/b)
        {
            ull m=(n*i)-((i*i)*b);
            if(m>max)
                max=m;
            else 
                break;
        }
        m1[mp(n,b)]=max;
        putIn(max);
    }
    return 0;
} 