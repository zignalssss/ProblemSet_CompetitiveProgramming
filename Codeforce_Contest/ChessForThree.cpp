#include<iostream>
using namespace std;
int main(){
	bool permu = true;
	int n,winner,spec = 3;
	int p1 = 1;
	int p2 = 2;
	cin >> n;
	for(int i = 0 ; i < n;i++){
		cin >> winner;
		if(winner == spec){
			permu = false;
			break;
		}
		if(winner == p1){
			int temp = p2;
			p2 = spec;
			spec = temp;
		}else{
			int temp = p1;
			p1 = spec;
			spec = temp;
		}
	} 
	cout << (permu?"YES":"NO");
	return 0;
}
