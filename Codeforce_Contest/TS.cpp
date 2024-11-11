#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
	lli n,m,a;
	cin >> n >> m >> a;
	cout <<  ((m+a-1)/a)*((n+a-1)/a);
}
