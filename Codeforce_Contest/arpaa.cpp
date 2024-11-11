#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> adj;
vector<int> visited;
int startnode, endnode;

int findlenTranversal(int u, int len) {
    if (visited[u]) {
        endnode = u;
        return len;
    }
    visited[u] = 1;
    return findlenTranversal(adj[u], len + 1);
}

int lcm(int a, int b) {
    return (a / __gcd(a, b)) * b;
}

int main() {
    int n; 
    cin >> n;
 
    adj.resize(n + 1); 
    visited.resize(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> adj[i];
    
    bool found = true;
    int res = 1;
    
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            startnode = i;
            int len = findlenTranversal(i, 0);
            if (startnode != endnode){	
//            	cout << "found : " << found <<endl;
//            	cout << "start : " << startnode <<endl;
//            	cout << "end : " << endnode <<endl; 
                found = false;
                break;
            }
            if (len % 2 == 0) 
                res = lcm(res, len / 2);
            else           
                res = lcm(res, len);
//            cout << "res : " << res <<endl;
//            cout << "len: " << len <<endl;
        }
    }       
    cout << (found ? res : -1) << endl;
    return 0;
}

