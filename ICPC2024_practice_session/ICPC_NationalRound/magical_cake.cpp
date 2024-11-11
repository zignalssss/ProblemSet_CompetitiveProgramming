#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n<2){
		cout << "0";
		return 0;
	}
	if(n%2 == 0){
		int sum=0,i=0;
		
		for(int i = 1 ; i < n; i+=2){                                
			sum += (((i+1)-n))*(((i+1)-n)+1)/2;
			i++;
		}
		cout << sum+i;

	}

	

	
	

	return 0;
}
