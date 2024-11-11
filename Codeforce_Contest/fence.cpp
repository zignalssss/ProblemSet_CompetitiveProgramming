#include<iostream>
using namespace std;
int main(){
	int n,angle;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> angle;
		(360 % (180-angle) == 0) ? cout << "YES" <<endl : cout << "NO"<<endl;
	}
	return 0;
}
