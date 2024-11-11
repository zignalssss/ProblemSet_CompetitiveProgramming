#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int r = 1;
    vector<string> ans;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vi arr;
        for(int i = 0;i < n;i++){
            ll val;
            cin >> val;
            arr.push_back(val);
        }
        ll time = 0;
        ll tod = 0;
        for(int i = arr.size()-1 ; i >= 0;i--){
            if(arr.size() <= 2){
                time += arr[i];
                break;
            }else{
                    time += tod + arr[i];
                    tod = arr[i];
            }
        }
        if((time-1) <= k){
            ans.push_back("YES");
        }else{
            ans.push_back("NO");
        }
        r++;
    }
    for(int i = 0; i < ans.size();i++){
        cout <<  "Case " <<  "#" <<  i+1 << ":" << ans[i] << endl;
    }
    return 0;
}