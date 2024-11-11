#include<iostream>
using namespace std;
int solve_legendary_string(string s,string t){
	int index = 0,countmin = 0;

	for(int i = 0 ; i < s.length();i++){
		for(int j = i ; j < t.length();j++){
			
			if(s[i] == t[j]){
		
				break;
			}else{
				countmin++;
			}
			
		}
	}
	cout << p;
	return countmin;
}
int main(){
	int n;
	string t;
	cin >> t;
	cin >> n;
	for(int i = 0;i < n;i++){
		string s;
		cin >> s;
		cout << solve_legendary_string(s,t);
	}
	return 0;
}
