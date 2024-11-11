#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
using namespace std;

map<string, char> initial_keypad() {
    map<string, char> m_char;
    m_char["2"] = 'a';    m_char["3"] = 'd';
    m_char["22"] = 'b';    m_char["33"] = 'e';
    m_char["222"] = 'c';    m_char["333"] = 'f';

    m_char["4"] = 'g';    m_char["5"] = 'j';
    m_char["44"] = 'h';    m_char["55"] = 'k';
    m_char["444"] = 'i';    m_char["555"] = 'l';

    m_char["6"] = 'm';    m_char["7"] = 'p';    m_char["7777"] = 's';
    m_char["66"] = 'n';    m_char["77"] = 'q';
    m_char["666"] = 'o';    m_char["777"] = 'r';

    m_char["8"] = 't';    m_char["9"] = 'w';    m_char["9999"] = 'z';
    m_char["88"] = 'u';    m_char["99"] = 'x';
    m_char["888"] = 'v';    m_char["999"] = 'y';
    return m_char;
}

int main() {
    map<string, char> mc = initial_keypad();
    vector<pair<char,int>> arr(10);
    string result = "";
    string str = "";
    string s;
    cin >> s;
	
   	for(int i = 0;i < s.length();i++){
   		int index = s[i]-'0';
   		arr[index].first = s[i]; 
		arr[index].second++; 
	}
	
//	for(int i = 0;i < arr.size();i++){
//   		cout << "| Pari : "<< arr[i].first << " "<< arr[i].second < " ";
//	}
	int c = 1;
	char state = s[s.length()-1];
//	str += arr[s[s.length()-1]-'0'].first;

    for(int i = s.length()-1; i >= 0 ; i--) {

    	str += arr[s[i]-'0'].first;
    	arr[s[i]-'0'].second--;
//    	cout << "str" << str << " c " << c << endl;
//    	cout << "string "<< str <<endl; 
		if(c == 2 && arr[s[i-1]-'0'].first != arr[s[i]-'0'].first){
			result += mc[str];
			str = "";
			c=1;
    		continue;
		}
		if(c == 1 && arr[s[i-1]-'0'].first != arr[s[i]-'0'].first){
			result += mc[str];
			str = "";
			c=1;
    		continue;
		}	
    	if(arr[s[i]-'0'].second == 0){
    		result += mc[str];
    		str = "";
    		c=1;
    		continue;
		}
		if(c % 4 == 0 ){
   			result += mc[str];
   			str = "";
   			c=1;
   			continue;
		}
   		if(c % 3 == 0 ){
   			if((s[i] == s[i-1] ) && (s[i] == '7' || s[i] == '9')){
//   				cout << "resutlt " << str << endl;

   				c++;
				continue;
			}else{
//				cout << "Test" << str << endl;
				result += mc[str];
//   			cout << "resutlt " << result << endl;
   				str = "";
   				c=1;
   				continue;
			}
		}		
		c++;		
    }
    
    string reversed(result.rbegin(), result.rend());
    cout <<  reversed;

    return 0;
}

