#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	float s;
	cin >> n;
	s = round(n/5);
	if(n % 5 != 0) s+=1;
	cout << (int)s;
	return 0;
}
