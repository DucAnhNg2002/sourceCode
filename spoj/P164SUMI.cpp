#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k;
    cin >> n >> k;
    long long a[n+1];
    for(int i = 1 ; i <= n ; i++ ) cin >> a[i];
    int dem = 0 ;
    for(int i = 1 ; i <= n; i++){
        if( a[i] > 0 && a[i] >= a[k] ) dem++;
    }
    cout << dem;
} 
