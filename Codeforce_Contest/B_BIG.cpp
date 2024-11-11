#include <iostream>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    
    while (t--) {
       ll n, k;
        cin >> n >> k;     
       ll start_year = max(1LL, n - k + 1);
       ll count_odd = (n + 1) / 2 - (start_year) / 2;
        if (count_odd % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
