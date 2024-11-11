#include <iostream>
using namespace std;
typedef long long  ll;
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll start_year = max(1LL, n - k + 1);
        
        int total_leaves_parity = 0;  
        
   
        for (ll i = start_year; i <= n; i++) {
            if (i % 2 == 1) {  
                total_leaves_parity ^= 1;  
            }
        }
        
     
        if (total_leaves_parity == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
