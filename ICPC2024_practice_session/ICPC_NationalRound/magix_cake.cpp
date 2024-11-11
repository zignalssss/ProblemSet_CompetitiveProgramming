#include<iostream>
using namespace std;

int main()
{
    int n;
    unsigned long long int c_1 = 4; //4
    unsigned long long int c_2 = 2; //3
    unsigned long long int res;
    cin >> n;
    if(n < 3){
        cout << 0 << endl;
        return 0;
    }
    if(n == 4){
        cout << c_1 ;
        return 0;
    }
    if(n == 3){
        cout << c_2;
        return 0;
    }
    int odd = 3;
    int even = 1;
    for(int i = 5 ; i <=n ; i++){
        if(i%2 == 0){
            res = c_1+(c_1-c_2) + even;
            even++;
            c_2 = c_1;
            c_1 = res;
        }
        else{
            res = c_1+(c_1-c_2) + odd;
            odd++;
            c_2 = c_1;
            c_1 = res;
        }
    }
    cout << res << endl;

    return 0;
}
