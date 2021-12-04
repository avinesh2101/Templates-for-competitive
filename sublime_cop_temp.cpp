#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <ctime>
#include <functional>
#include <sstream>
#include <fstream>
#include <valarray>
#include <complex>
#include <queue>
#include <cassert>
#include <bitset>
using namespace std;

#ifdef LOCAL
#define debug_flag 1
#else
#define debug_flag 0
#endif

	template <class T1, class T2 >
	std::ostream& operator << (std::ostream& os, const pair<T1, T2> &p) 
{
		os << "[" << p.first << ", " << p.second << "]";
			return os;
}

	template <class T >
	std::ostream& operator << (std::ostream& os, const std::vector<T>& v) 
{
		os << "[";
			bool first = true;
				for (typename std::vector<T>::const_iterator it = v.begin(); it != v.end(); ++it)
						{
									if (!first)
													os << ", ";
											first = false;
													os << *it;
														}
					os << "]";
						return os;
}

#define dbg(args...) { if (debug_flag) { _print(_split(#args, ',').begin(), args); cerr << endl; } else { void(0);} }

vector<string> _split(const string& s, char c) {
		vector<string> v;
			stringstream ss(s);
				string x;
					while (getline(ss, x, c))
								v.emplace_back(x);
						return v;
}

void _print(vector<string>::iterator) {}
template<typename T, typename... Args>
void _print(vector<string>::iterator it, T a, Args... args) {
		string name = it -> substr((*it)[0] == ' ', it -> length());
			if (isalpha(name[0]))
						cerr << name  << " = " << a << " ";
				else
							cerr << name << " ";
					_print(++it, args...);
1}

typedef long long int int64;

const int INF = (int)1e9;
const int N = (int)2e6 + 100;

int n;
int min_div[N];
int id[N];
int div_id[N];
int cnt[N];
int head[N];
int list[N];

int gcd(int a, int b)
{
		if (b == 0)
					return a;
			return gcd(b, a % b);
}

int main()
{
	#ifdef LOCAL
		freopen ("input.txt", "r", stdin);
	#endif

}

