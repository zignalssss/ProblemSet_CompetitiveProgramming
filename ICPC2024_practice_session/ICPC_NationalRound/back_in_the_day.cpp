#include<iostream>
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
    string a = "";
    string result = "";
    string ans = "";
    string s;
    cin >> s;
    
    int c = 0;
    char start_char = s[0];
    
    for (int i = 0; i <= s.length(); i++) {
        if (s[i] != start_char) {
            start_char = s[i];
            if (c == 3) {
                result += mc[a];
            } else if (c < 3) {
                result += mc[a];
            } else if (c > 3) {
                int c_mod = 1;
                string prob = "";
                for (int j = a.length() - 1; j >= 0; j--) {
                    prob += a[j];
                    if ((c_mod % 4 == 0 && (a[j] == '7' || a[j] == '9')) || 
                        (c_mod % 3 == 0 && a[j] != '7' && a[j] != '9')) {
                        ans = mc[prob] + ans;
                        prob = "";
                    }
                    c_mod++;
                }
                if (!prob.empty()) {
                    ans = mc[prob] + ans;
                }
            }
            c = 1;
            a = s[i];
        } else {
            a += s[i];
            c++;
        }
    }
 
    string str = ans + result;
    cout << str << endl;
 
    return 0;
}
