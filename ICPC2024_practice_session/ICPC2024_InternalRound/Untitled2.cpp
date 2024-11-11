#include<iostream>
using namespace std;
int main(){
	int t,n,a;
	cin >> t;
	for(int i = 0 ; i < t;i++){
		cin >> n >> a;
		 if(n*a > (n*(n+1)/2)){
		 	cout << n*a << endl;
		 }else{
		 	cout << (n*(n+1)/2) << endl;
		 }
	}
}
