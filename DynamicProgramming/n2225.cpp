
#include <iostream>

int DP[201][201];

int main() {
    int N, k;
    std::cin >> N >> k;

    for (int i = 0; i <= k; i++)
        DP[1][i] = i;

    for (int i = 2; i <= N; i++)
        for (int j = 1; j <= k; j++)
            DP[i][j] = (DP[i - 1][j] + DP[i][j - 1]) % 1000000000;

    std::cout << d[N][k] << std::endl;

    return 0;
}