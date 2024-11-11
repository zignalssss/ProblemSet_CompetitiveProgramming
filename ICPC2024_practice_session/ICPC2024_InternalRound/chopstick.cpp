#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	 int n;
	 long long val;	 
	 cin >> n;
	 vector<long long> arr;
	 for(int i = 0 ; i < n; i++){
	 	cin >> val;
	 	arr.push_back(val);
	 }
	sort(arr.begin(),arr.end(),greater<int>());
	cout << arr[0] * arr[1];
}
