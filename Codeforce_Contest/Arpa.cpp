#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int n;
    cin >> n;
    vector<int> crush(n);
    for (int i = 0; i < n; i++) {
        cin >> crush[i];
        crush[i]--; 
    }
    
    vector<bool> visited(n, false);
    int t = 1;
    
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            int current = i;
            int cycle_length = 0;
            
           
            while (!visited[current]) {
                visited[current] = true;
                current = crush[current];
                cycle_length++;
            }
            
            
            t = lcm(t, cycle_length);
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (crush[i] == i) {
            cout << -1 << endl;
            return 0;
        }
    }
    
    cout << t << endl;
    return 0;
}

