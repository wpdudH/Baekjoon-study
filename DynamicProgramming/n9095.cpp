/*
문제
2×n 크기의 직사각형을 1×2, 2×1 타일로 채우는 방법의 수를 구하는 프로그램을 작성하시오.

아래 그림은 2×5 크기의 직사각형을 채운 한 가지 방법의 예이다.

입력
첫째 줄에 n이 주어진다. (1 ≤ n ≤ 1,000)

출력
첫째 줄에 2×n 크기의 직사각형을 채우는 방법의 수를 10,007로 나눈 나머지를 출력한다.
*/

#include<iostream>

int test_case, N;
int cnt = 0;
int dp[12] = { 0, };

int main() {

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	std::cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		std::cin >> N;
		cnt = 0;
		for (int i = 4; i <= N; i++) {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
		std::cout << dp[N] << std::endl;

	}


	return 0;
}