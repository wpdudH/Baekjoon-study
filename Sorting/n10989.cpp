#include<iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int cnt[10001] = { 0 };
	int n, count;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> count;
		cnt[count]++;
	}

	for (int i = 1; i < 10001; i++)
		for (int j = 0; j < cnt[i]; j++)
			std::cout << i << '\n';

	return 0;
}