#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        if(n == 1){
            cout << "NO" << endl;
        }else{
             ll leave = 0;
            if (n > k){
                for (ll i = max(1LL,abs(n - k + 1)); i <= n; i++) {
                    leave += pow(i, i);
                }
            }else{
                for (ll i = 1; i <= n; i++) {
                    leave += pow(i, i);
                }
            }
           
            if (leave % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
  return 0;
}
