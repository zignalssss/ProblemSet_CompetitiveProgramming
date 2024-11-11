#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main(){
	int n,f,way_diff = 0;
	cin >> n;
	vector<int> b;
	for(int i = 0 ; i < n ;i++){
		cin >> f;
		b.push_back(f);
	}
	int max_b = *max_element (b.begin(), b.end());
	int min_b = *min_element (b.begin(), b.end());
	int maxnubmer = count(b.begin(), b.end(), max_b);
	int minnumber = count(b.begin(), b.end(), min_b);
	int diff = max_b - min_b;
	cout << diff << " " << maxnubmer*minnumber;

	return 0;
}
