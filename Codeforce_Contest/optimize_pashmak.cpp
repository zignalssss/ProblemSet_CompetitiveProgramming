#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, f;
    cin >> n;
    vector<int> b(n);
    
    for(int i = 0 ; i < n ; i++){
        cin >> b[i];
    }

    int max_b = *max_element(b.begin(), b.end());
    int min_b = *min_element(b.begin(), b.end());
    int diff = max_b - min_b;

    int count_max = 0, count_min = 0;
    for(int i = 0; i < n; i++) {
        if (b[i] == max_b) count_max++;
        if (b[i] == min_b) count_min++;
    }

    long long way_diff = 0;
    if (diff == 0) {
        way_diff = (long long)n * (n - 1) / 2;
    } else {
        way_diff = (long long)count_max * count_min;
    }

    cout << diff << " " << way_diff;
    return 0;
}

