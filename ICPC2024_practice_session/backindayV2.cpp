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

    char current_char = s[0];  // ตัวอักษรแรกที่กด
    int count = 1;             // เริ่มนับจาก 1 กด
    
    // เริ่มต้นวนลูปที่ index 1 เพราะเราได้เก็บข้อมูลตัวอักษรแรกแล้ว
    for (int i = 1; i <= s.length(); i++) {
        // ถ้ายังเป็นการกดปุ่มตัวเดิม
        if (i < s.length() && s[i] == current_char) {
            count++;  // นับจำนวนครั้งที่กด
        } else {
            // สร้างสตริงสำหรับจำนวนการกด
            string key_presses(count, current_char); 
            // แปลงเป็นตัวอักษร
            result += mc[key_presses];
            
            // รีเซ็ตค่าหากมีอักขระถัดไป
            if (i < s.length()) {
                current_char = s[i];
                count = 1;
            }
        }
    }

    // แสดงผลลัพธ์
    cout << result << endl;

    return 0;
}

