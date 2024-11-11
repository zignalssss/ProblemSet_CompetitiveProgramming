#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	char a;
	char prev;
	int count = 0;
	for(int i = 0 ; i < n; i++){
		cin >> a;
		if(i == 0){
			prev = a;
			continue;
		}
		if(prev == a && i != 0)count++;	
		else prev = a;
	}
	cout << count;
	return 0;
}
