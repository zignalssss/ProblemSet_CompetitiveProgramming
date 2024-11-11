#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
	string s;
	string res = "";
	cin >> s;
	long long n = s.length();
	for(long long i =  0 ; i < n;i++){
		if((s[i] == 'a' || s[i] == 'A') || (s[i] == 'e' || s[i] == 'E') || (s[i] == 'i' || s[i] == 'I') || (s[i] == 'o' || s[i] == 'O') || (s[i] == 'u' || s[i] == 'U')){
			continue;
		}else{
			res += '.';
			res += tolower(s[i]);
		}
	}
	cout << res << endl; 
	return 0;
}
