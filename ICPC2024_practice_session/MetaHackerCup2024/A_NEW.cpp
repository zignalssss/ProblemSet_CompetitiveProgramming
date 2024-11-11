#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
using namespace std;
typedef vector<int> vi;
typedef long long int lli;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t , n , k;
    cin >> t;
    int count = 1;
    while(t--)
    {
        lli tmp;
        cin >> n >> k;
        vi arr(n);
        lli sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        lli minE = *min_element(arr.begin() , arr.end());
        if(n == 1)
        {
            if(minE <= k)cout << "Case #"<<count<<": YES\n";
            else cout << "Case #"<<count<<": NO\n";
            count++;
            continue;
        }
        if(((2*(n-2))+1)*minE <= k) cout << "Case #"<<count<<": YES\n";
        else cout << "Case #"<<count<<": NO\n";
        count++;
    }
    return 0;
}