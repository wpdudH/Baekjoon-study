/*
문제
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

입력
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

출력
첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.
*/

#include <iostream>
#include <cmath>

int main()
{
	int num;

	std::cin >> num;

	for (int i = 1; i < num * 2; i++)
	{
		int k = num - abs(num - i);
		for (int j = 0; j < num * 2 - k; j++)
		{
			if (j > k - 2)
			{
				std::cout << "*";
			}
			else
			{
				std::cout << " ";
			}
		}
		if (i != num * 2 - 1)
		{
			std::cout << "\n";
		}
	}
	return 0;
}