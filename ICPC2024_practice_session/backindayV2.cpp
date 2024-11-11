#include<iostream>
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
    string result = "";
    string str = "";
    string s;
    cin >> s;

    char current_char = s[0];  // ����ѡ���á��衴
    int count = 1;             // ������Ѻ�ҡ 1 ��
    
    // �������ǹ�ٻ��� index 1 ����������红����ŵ���ѡ���á����
    for (int i = 1; i <= s.length(); i++) {
        // ����ѧ�繡�á�����������
        if (i < s.length() && s[i] == current_char) {
            count++;  // �Ѻ�ӹǹ���駷�衴
        } else {
            // ���ҧʵ�ԧ����Ѻ�ӹǹ��á�
            string key_presses(count, current_char); 
            // �ŧ�繵���ѡ��
            result += mc[key_presses];
            
            // ���絤���ҡ���ѡ��жѴ�
            if (i < s.length()) {
                current_char = s[i];
                count = 1;
            }
        }
    }

    // �ʴ����Ѿ��
    cout << result << endl;

    return 0;
}

