/*
문제
정수 X에 사용할 수 있는 연산은 다음과 같이 세 가지 이다.

1. X가 3으로 나누어 떨어지면, 3으로 나눈다.
2. X가 2로 나누어 떨어지면, 2로 나눈다.
3. 1을 뺀다.


입력
첫째 줄에 1보다 크거나 같고, 106보다 작거나 같은 정수 N이 주어진다.

출력
첫째 줄에 연산을 하는 횟수의 최솟값을 출력한다.
*/

#include <iostream>

int m[1000000];

int main()
{
	int num;

	std::cin >> num;

	m[0] = 0;
	m[1] = 1;
	m[2] = 1;

	if (num >= 4)
	{
		for (int i = 4; i <= num; i++)
		{
			int min = 1 + m[i - 2];
			if (i % 2 == 0)
			{
				min = (min < 1 + m[i / 2 - 1]) ? min : 1 + m[i / 2 - 1];
			}
			if (i % 3 == 0)
			{
				min = (min < 1 + m[i / 3 - 1]) ? min : 1 + m[i / 3 - 1];
			}
			m[i - 1] = min;
		}
	}

	std::cout << m[num - 1];
}