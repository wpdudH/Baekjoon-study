#include <iostream>

int DP[1001] = { 0, };
int number = 0;
int cardPack[1001] = { 0, };

int BiggerNumber(int a, int b)
{
	return (a > b) ? a : b;
}

int FindSolution(int number)
{
	int big = cardPack[number];
	for (int i = number - 1; i >= (number / 2); i--)
	{
		big = BiggerNumber(DP[i] + DP[number - i], big);
	}

	return big;
}

int main()
{
	std::cin >> number;

	for (int i = 1; i <= number; i++)
	{
		std::cin >> cardPack[i];
	}

	DP[1] = cardPack[1];

	for (int j = 2; j <= number; j++)
	{
		DP[j] = FindSolution(j); 
	}

	std::cout << DP[number];

	return 0;
}