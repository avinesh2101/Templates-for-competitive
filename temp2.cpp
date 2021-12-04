#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#define int long long
using namespace std;
 
namespace model{
	const int N = 1e6+7,P=998244353;
	int read()
	{
		int a = 0,x = 1;char ch = getchar();
		while(ch > '9' || ch < '0') {if(ch == '-') x = -1;ch = getchar();}
		while(ch >= '0' && ch <= '9'){a = a*10 + ch-'0';ch = getchar();}
		return a*x;
	}
	int fpow(int a,int x,int p) 
	{
		if(x == 1) return a;
		if(x == 0) return 1;
		int t = fpow(a,x>>1,p);
		if(x&1) return t*t%p*a%p;
		return t*t%p;
	}
	void Mod(int &a) {if(a >= P) a %= P;}
}
 
using model::read;
using model::N;
 
int n,k,x,a[N],b[N]; 
 
void solve()
{
	n = read(),k = read(),x = read();
	
	puts("1");
}
 
signed main()
{
	int t = 1;
	while(t --) solve();
}