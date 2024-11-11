#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,h,q;
    // cout << "grasshopper = n \nnumber of net = m\nelephant H = h\n question = q\n";
    cin >> n >> m >> h >> q;
    vector<pair<int,int> > a(n);
    // cout << "Position of Grasshopper" <<endl;
    for(auto &[x,y]:a)
        cin >> x >> y; //input grasshopper position (xi,yi)

    multiset<int> net;
    // cout << "INPUT NET HERE :" << endl;
    for(int i = 0;i < m;i++){
        int x;
        cin >> x;
        net.emplace(x);
    }

    vector<int> res_arr;
    for(auto [x,y]:a){
        // cout << "This is Pair : " << x << " " << y << endl;
        auto it=net.lower_bound(abs(y-h));
        // cout << "position it (lower_bound):" << *it << " y-h = " << abs(y-h) << endl;
        if(it!=net.end()){
            net.erase(it);
			// cout << "emplace x :" << x << endl;
            res_arr.emplace_back(x);
        }
    }
	// for(int i = 0 ; i < res_arr.size();i++){
	// 	cout << res_arr[i] << " ";
	// }

    while(q--){
        int x;
        cin >> x;
        x--;
        cout << (x<res_arr.size()?res_arr[x]:-1) << endl;
    }
}