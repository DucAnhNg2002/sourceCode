#include<bits/stdc++.h>
 
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
 
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
void solve(){
	ll n;
	cin >> n;
	vector<ll> a;
	int dem = 0 ;
	FOR(0,n){
		ll x;
		cin >> x;
		if( x!=0 ) a.push_back(x);
		else dem++;
	}
	FOR(0,a.size()) cout << a[i] << ' ';
	FOR(1,dem+1) cout << 0 << ' ';
	cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while( t-- ){
    	solve();
	}
}  
