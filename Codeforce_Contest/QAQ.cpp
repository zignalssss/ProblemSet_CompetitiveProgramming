#include<iostream>
#include<vector>
using namespace std;

int solveQAQ(string s){
	vector<int> q;
	vector<int> a;
	int count = 0;
	for(int i = 0 ; i < s.length();i++){
		if(s[i] == 'Q'){
			q.push_back(i);
		}else if(s[i] == 'A'){
			a.push_back(i);
		}
	}
	for (int i = 0; i < q.size(); ++i) {
        for (int j = i + 1; j < q.size(); ++j) {
            for (int k = 0; k < a.size(); ++k) {
                if (q[i] < a[k] && a[k] < q[j]) {
                    count += 1;
                }
            }
        }
    }

    return count;
}
int main(){
	string s;
	cin >> s;
	cout << solveQAQ(s);
}


