#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    for(int i = 0 ; i < t ; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int minValue = *min_element(a.begin(), a.end());
        int maxValue = *max_element(a.begin(), a.end());
        int difference = maxValue - minValue;

        if (difference == 0)
        {
            cout << 0 << endl;
            continue;
        }

        int sum = 0;
        for (int value : a)
        {
            sum += value;
        }

        int average = sum / n;
        int minPossible = average;
        int maxPossible = average + (sum % n != 0 ? 1 : 0);

        cout << maxPossible - minPossible << endl;
    }
    return 0;
}
