/*
문제
첫째 줄에는 별 1개, 둘째 줄에는 별 3개, ..., N번째 줄에는 별 2×N-1개를 찍는 문제

별은 가운데를 기준으로 대칭이어야 한다.

입력
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

출력
첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
*/

#include <iostream>

int main()
{
	int num;

	std::cin >> num;

	for (int i = 1; i < num + 1; i++)
	{
		for (int j = 0; j < num + i - 1; j++)
		{
			if (j > num - 1 - i)
			{
				std::cout << "*";
			}
			else
			{
				std::cout << " ";
			}
		}
		if (i != num)
		{
			std::cout << "\n";
		}
	}
	return 0;
}