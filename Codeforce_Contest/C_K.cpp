#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int r, n;
    cin >> r;
    
    while (r--) {
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        if (n <= 2) {
            cout << -1 << endl;
            continue;
        }

        // Sort the array to find the richest person easily
        sort(arr.begin(), arr.end());
        int maxWealth = arr[n - 1]; // richest person's wealth
        double average = (double)sum / n;
        double halfAverage = average / 2.0;

        // Count how many are unhappy
        int unhappyCount = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] < halfAverage) {
                unhappyCount++;
            }
        }

        // If more than half are unhappy already
        if (unhappyCount > n / 2) {
            cout << 0 << endl; // No additional gold needed
            continue;
        }

        // Minimum x required to make more than half unhappy
        int x = 0;
        while (true) {
            double newAverage = (sum + x + maxWealth) / n;
            double newHalfAverage = newAverage / 2.0;

            // Recount unhappy people with the new average
            unhappyCount = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] < newHalfAverage) {
                    unhappyCount++;
                }
            }

            if (unhappyCount > n / 2) {
                cout << x << endl;
                break;
            }

            x++; // Increase the amount of gold found
        }
    }

    return 0;
}
