#include<bits/stdc++.h>
#include<iostream>
#include<set>
using namespace std;

using ll = long long;

const ll INF=1e18;

int main(){
    int n,m,h,q;
    cout << "grasshopper = n \nnumber of net = m\nelephant H = h\n question = q\n";
    cin >> n >> m >> h >> q;
    vector<pair<int,int> > a(n);
    cout << "Position of Grasshopper" <<endl;
    for(auto &[x,y]:a)cin >> x >> y; //input grasshopper position (xi,yi)

    multiset<int> ms;
    cout << "INPUT NET HERE :" << endl;
    for(int i=0;i<m;i++){
        int x;
        cin >> x;
        ms.emplace(x);
    }

    // Printing the multiset elements
    cout << "Print Iterator : " << endl;
    for(multiset<int>::iterator it = ms.begin(); it != ms.end(); it++){
        cout << it << " ";  // Print each element pointed by the iterator
    }
    cout << endl;

    vector<int> ans;
    for(auto [x,y]:a){
        cout << "This is Pair : " << x << " " << y << endl;
        auto it=ms.lower_bound(abs(y-h));
        cout << "position it (lower_bound):" <<it << " y-h = " << abs(y-h) << endl;
        if(it!=ms.end()){
            ms.erase(it);
            ans.emplace_back(x);
        }
        cout << "Multiset Iterator : ";
        for(multiset<int>::iterator it = ms.begin(); it != ms.end(); it++){
            cout << *it << " ";  // Print each element pointed by the iterator
        }
        cout << endl;
    }

    while(q--){
        int x;
        cin >> x;
        x--;
        cout << (x<ans.size()?ans[x]:-1) << "\n";
    }
}
