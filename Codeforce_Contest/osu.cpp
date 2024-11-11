#include<iostream>
#include<vector>
using namespace std;
int main(){
	int test_case;
	cin >> test_case;
	for(int _ = 0 ; _ < test_case; _++){
		int val;
		cin >> val;
		vector<int> ans;
		ans.push_back(0);
		for(int i = 0 ; i < val;i++){
			for(int j = 1 ; j <= 4; j++){
				char a;
				cin >> a;
				if(a == '#'){
					ans.push_back(j);
				}
			}
		}
		for(int i = ans.size()-1 ; i >= 1 ;i--){
			cout << ans[i]<< " ";
		}
	}
	return 0;
}
