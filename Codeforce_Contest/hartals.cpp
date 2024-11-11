#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
	int t;
	int n;
	int p;
	cin >> t;
	while(t--){
		cin >> n;
		cin >> p;
		vector<int> ht(p);
		for(int i = 0 ;i < p;i++){
			cin >> ht[i];
		}
//		vector<bool> d(n,false);
		set<int> d;
		for(int i = 0 ;i < p;i++){
			int h = ht[i];
			for(int j = h; j <= n;j+=h){
				if((j%7 != 0) && (j%7 != 6) ){
//					d[j] = true;
					d.insert(j);
				}
			}
		}
//		int count = 0;
//		for(int i = 0 ; i < d.size();i++){
//			if(d[i]){
//				count++;
//			}
//		}
		cout << d.size() <<endl;
	}
	return 0;
}
