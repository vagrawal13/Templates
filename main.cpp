
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <list>
#include <map>
#include <set>
#include <bitset>
#include <functional>
#include <utility>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string.h>
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
#define debug(args...) dbg(),args
#define S(N) scanf("%d", &N)
#define SC(N) scanf("%c", &N)
#define SL(N) scanf("%lld", &N)
#define SF(N) scanf("%lf", &N) 
#define SS(N) scanf("%s", N) 
#define FOR(A,B,C) for(int A=B;A<C;A++)
#define EFOR(A,B,C) for(int A=B;A<=C;A++)
#define RFOR(A,B,C) for(int A=B;A>=C;A--)
#define FORL(A,B,C) for(ll A=B;A<C;A++)
#define EFORL(A,B,C) for(ll A=B;A<=C;A++)
#define RFORL(A,B,C) for(ll A=B;A>=C;A--)
#define PB(A,B) A.push_back(B);
#define ALL(A) A.begin(),A.end()
#define MEM(A,B) memset(A,B,sizeof(A))
#define MAX(A,B) (A > B) ? A : B
#define MIN(A,B) (A < B) ? A : B
#define DBGCHECK if (argc > 1) DBG = ((*argv[1] == '0') ? 0 : 1)
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define LIM 100
#define MOD 100000007LL
#define INF  99
bool DBG;
int countbit(int n) {return (n==0)?0:(1+countbit(n&(n-1)));}
int lowbit(int n) {return (n^(n-1))&n;}
struct dbg { template<typename T> dbg& operator , (const T& v) { if (DBG) cerr << v << " "; return *this; } ~dbg() { if (DBG) cerr << endl; } };

int main (int argc, char *argv[]) 
{
 DBGCHECK;
	int t;
	S(t);
	while (t-- > 0) {
	
	}
}
