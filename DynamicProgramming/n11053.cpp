/*
문제:
수열 A가 주어졌을 때, 가장 긴 증가하는 부분 수열을 구하는 프로그램을 작성하시오.

예를 들어, 수열 A = {10, 20, 10, 30, 20, 50} 인 경우에 가장 긴 증가하는 부분 수열은 A = {10, 20, 10, 30, 20, 50} 이고, 길이는 4이다.

입력:
첫째 줄에 수열 A의 크기 N (1 ≤ N ≤ 1,000)이 주어진다.

둘째 줄에는 수열 A를 이루고 있는 Ai가 주어진다. (1 ≤ Ai ≤ 1,000)

출력:
첫째 줄에 수열 A의 가장 긴 증가하는 부분 수열의 길이를 출력한다.
*/
#include <iostream>
#define MAX 10000 + 1

int N;
int Arr[MAX] = { 0, };
int DP[MAX] = { 0, };

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
		DP[j] = 1;
		for (int k = 1; k < j; k++)
		{
			if (Arr[j] > Arr[k])
			{
				DP[j] = (DP[j] > DP[k] + 1) ? DP[j] : DP[k] + 1;
			}
		}

		length = (DP[j] > length) ? DP[j] : length;
	}

	std::cout << length << std::endl;

	return 0;
}
