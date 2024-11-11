#include <iostream>
#include <string>

using namespace std;

string guess_password(int n) {
    string password = "";
    for (int i = 0; i < n; i++) {
        string query = "1" + password;
        cout << "? " << query << endl;
        cout.flush();
        
        int response;
        cin >> response;
        
        if (response == 1) {
            password = "1" + password;
        } else {
            password = "0" + password;
        }
    }
    return password;
}

void solve_test_case() {
    int n;
    cin >> n;
    string password = guess_password(n);
    cout << "! " << password << endl;
    cout.flush();
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve_test_case();
    }
    return 0;
}