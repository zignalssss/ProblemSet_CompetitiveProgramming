#include <iostream>
#include <string>
using namespace std;

void flush() {
    cout.flush();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        string password = "";

        for (int i = 0; i < n; i++) {
            string test_with_0 = password + "0";
            cout << "? " << test_with_0 << endl;
            flush();
            int response;
            cin >> response;
            
            if (response == 1) {
                password += "0";
            } else {
                password += "1";
            }
        }

        cout << "! " << password << endl;
        flush();
    }

    return 0;
}
