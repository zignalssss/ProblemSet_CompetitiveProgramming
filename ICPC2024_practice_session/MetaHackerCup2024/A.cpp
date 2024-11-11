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
        sort(arr.begin(),arr.end(),greater<int>());
        ll time = 0;
        for(int i = 0 ; i < arr.size();i++){
            if(arr.size() <= 2){
                time += arr[i];
                break;
            }else{
                if(i == 0){
                    continue;
                }else{
                    time  += arr[i]*2;
                }  
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
        cout <<  "Case " <<  "#" <<  i+1 << ": " << ans[i] << endl;
    }
    return 0;
}