#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r , n ,k;
    cin >> r;
    while(r--)
    {
        int sum = 0;
        int count = 0;
        cin >> n >> k;
        vector<int>arr(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i] >= k)
            {
                sum +=arr[i];
            }
            else if(arr[i] == 0 && sum >= 1)
            {
                sum--;
                count++;
            }
        }
        cout << count << endl;



    }
    return 0;
}