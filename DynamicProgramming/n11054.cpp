/*
문제:
수열 S가 어떤 수 Sk를 기준으로 S1 < S2 < ... Sk-1 < Sk > Sk+1 > ... SN-1 > SN을 만족한다면, 그 수열을 바이토닉 수열이라고 한다.

예를 들어, {10, 20, 30, 25, 20}과 {10, 20, 30, 40}, {50, 40, 25, 10} 은 바이토닉 수열이지만, {1, 2, 3, 2, 1, 2, 3, 2, 1}과 {10, 20, 30, 40, 20, 30} 은 바이토닉 수열이 아니다.

수열 A가 주어졌을 때, 그 수열의 부분 수열 중 바이토닉 수열이면서 가장 긴 수열의 길이를 구하는 프로그램을 작성하시오.

입력:
첫째 줄에 수열 A의 크기 N이 주어지고, 둘째 줄에는 수열 A를 이루고 있는 Ai가 주어진다. (1 ≤ N ≤ 1,000, 1 ≤ Ai ≤ 1,000)

출력:
첫째 줄에 수열 A의 부분 수열 중에서 가장 긴 바이토닉 수열의 길이를 출력한다.
*/
#include <iostream>
#define MAX 10000 + 1

int N;
int Arr[MAX] = { 0, };
int DP[2][MAX] = { 0, };

int main()
{
	std::cin >> N;

	int length = 0;

	for (int i = 1; i < N + 1; i++)
	{
		std::cin >> Arr[i];
	}

	for (int j = 1; j < N + 1; j++)
	{
		DP[0][j] = 1;
		for (int k = 1; k < j; k++)
		{
			if (Arr[j] > Arr[k])
			{
				DP[0][j] = (DP[0][j] > DP[0][k] + 1) ? DP[0][j] : DP[0][k] + 1;
			}
		}
	}
	
	for (int j = N; j > 0; j--)
	{
		DP[1][j] = 1;
		for (int k = N; k > j; k--)
		{
			if (Arr[j] > Arr[k])
			{
				DP[1][j] = (DP[1][j] > DP[1][k] + 1) ? DP[1][j] : DP[1][k] + 1;
			}
		}

		length = (length > DP[0][j] + DP[1][j] - 1) ? length : DP[0][j] + DP[1][j] - 1;
	}

	std::cout << length << std::endl;

	return 0;
}
