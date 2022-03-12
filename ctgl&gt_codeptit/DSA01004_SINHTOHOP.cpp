#include <bits/stdc++.h>
#define LL long long 
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define debug cout << "YES" << endl
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

int x[25] , k , n , stop;

void Init() {
	stop = false;
	FOR(i,1,k) {
		x[i] = i;
	}
}

void Xuat() {
	FOR(i,1,k) {
		cout << x[i];
	}
	cout << ' ';
}

void Sinh() {
	int i = k;
	while( i >= 1 && x[i] == n-k+i ) {
		i--;
	}
	if( i == 0 ) {
		stop = true;
	}
	else {
		x[i]++;
		int p = x[i];
		while( i <= k ) {
			x[i++] = p++;
		}
	}
}

void CT() {
	while( !stop ) {
		Xuat();
		Sinh();
	}
}
void solve() {
	cin >> n >> k;
	Init();
	CT();
	cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
