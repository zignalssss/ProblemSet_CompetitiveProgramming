#include <bits/stdc++.h>
#include <cstddef>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r;
    int n;
    cin >> r;
    while(r--)
    {
        cin >> n;
        vector<long long int> arr(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        for(int i = n-2 ; i > 0 ; i--)
        {
            arr[i-1] = arr[i] - arr[i-1];
        }
        cout << arr[n-1] - arr[0]  << endl;
    }
    return 0;
}