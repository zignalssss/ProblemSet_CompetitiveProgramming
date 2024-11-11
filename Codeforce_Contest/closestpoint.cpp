#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        vector<int> arr;
        int n;
        cin >> n;
        int c = n;
        while(n--){
            int val;
            cin >> val;
            arr.emplace_back(val);
        }
        if(c > 2 || arr[0] + 1 == arr[arr.size()-1]){
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
