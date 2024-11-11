#include<bits/stdc++.h>
using namespace std;
int main(){
    int up = 0,low = 0;
    string s;
    getline(cin,s);
    for(char sub:s)(isupper(sub) ? up++ : low++);
    
    if((low > up) || (low == up)){
        for(int i = 0 ;i < s.length();i++){
            cout << (char)tolower(s[i]);
        }
    }else{
        for(int i = 0 ;i < s.length();i++){
            cout << (char)toupper(s[i]);
        }
    }
    return 0;
}