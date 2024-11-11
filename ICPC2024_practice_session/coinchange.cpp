#include <cinttypes>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

vector<int> init_vector(){
    vector<int> c = {1, 5, 10, 25, 50};
    return c;
}

int tabulation_dp_slove_coinchange(vector<vector<int>> arr, int i, int j) {
    vector<int> v = init_vector();
    arr[0][0] = 1;

    for (int y = 0; y <= j; y++) {
        arr[1][y] = 1;
        arr[0][y] = 1;
    }
    for (int x = 0; x <= i; x++) {
        arr[x][1] = 1;
        arr[x][0] = 0;
    }
    for (int x = 2; x <= i; x++) {
        for (int y = 2; y <= j; y++) {
            if ((x - v[y - 1]) >= 0) {
                arr[x][y] = arr[x][y - 1] + arr[x - v[y - 1]][y];
            } else {
                arr[x][y] = arr[x][y - 1];
            }
        }
    }
    return arr[i][j];
}

int main() {
    int c;
    while (cin >> c) {
        vector<vector<int>> arr(c + 1, vector<int>(6, 0));
        int result = tabulation_dp_slove_coinchange(arr, c, 5);
        cout << result << endl;
    }
    return 0;
}

