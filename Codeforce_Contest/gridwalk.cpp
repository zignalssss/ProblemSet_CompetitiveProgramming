#include <iostream>
#include <vector>
using namespace std;
typedef vector<vector<int>> vvi;
typedef vector<int> vi;
//const int MOD = 1000000007;

int gridWalk(int N, int M) {
    vvi dp(N + 1, vi(M + 1, 0));
	
	for(int i = 0 ; i <= M;i++){
		dp[0][i] = 1;	
	}
	for(int i = 0 ; i <= N;i++){
		dp[i][0] = 1;	
	}

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
                dp[i][j] = dp[i - 1][j] +  dp[i][j - 1];
        }
    }
//    
//	cout << endl;
//	for (int i = 0; i <= N; i++) {
//        for (int j = 0; j <= M; j++) {
//            cout << dp[i][j] << " ";
//        }
//        cout << endl;
//    }
//    
    return dp[N][M];
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    cout << gridWalk(N, M) << endl;
    return 0;
}

