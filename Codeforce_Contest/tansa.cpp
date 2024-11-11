#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string M, sol;
    int T;
    cin >> T >> M;
    cin.ignore();

    while (T--) {
        getline(cin, sol);
        for (char c : sol) {
            if (c == '_') {
                cout << " ";
            } else if (!isalpha(c)) {
                cout << c;
            } else if (isupper(c)) {
                int index = c - 'A';
                cout << (char)toupper(M[index]);
            } else if (islower(c)) {
                int index = c - 'a';
                cout << M[index];
            }
        }
        cout << endl;
    }

    return 0;
}

