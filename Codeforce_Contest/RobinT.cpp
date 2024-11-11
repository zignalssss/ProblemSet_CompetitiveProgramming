#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr;
        int sum = 0;
        for(int i = 0; i < n; i++){
                int val;
                cin >> val;
                sum += val;
                arr.emplace_back(val);
        }
        int avg = sum/n;

        
    }
    return 0;
}