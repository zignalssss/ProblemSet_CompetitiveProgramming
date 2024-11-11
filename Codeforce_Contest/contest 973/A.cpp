#include<bits/stdc++.h>
#include<cmath>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x,y;
        cin >> n;
        cin >> x >> y;
        ll sec = 0;
        if(y >= x){
            sec = ceil((double)n / x);
        }else{
            ll full_add = (n+y-1)/y;
            sec = full_add;
        }

        //Time limit Exceed
        // int sec = 0;
        // int c = 0;
        // while(n > 0){
        //     int to_add_fruit = min(x,y);
        //     c += to_add_fruit ;
        //     n-=to_add_fruit ;

        //     int toblend = min(c,x);
        //     c -= toblend;
        //     sec++;
        // }
        cout << sec << endl;
    }
    return 0;
}