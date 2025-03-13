#include <iostream>

void vps(std::string s)
{
	int l = 0;
	for (int j = 0; j < s.length(); j++)
	{
		char a = s[j];
		char c = '(';
		if (a == c)
		{
			l++;
		}
		else
		{
			l--;
		}

		if (l < 0)
		{
			std::cout << "NO" << std::endl;
			return;
		}
	}

	if (l == 0)
	{
		std::cout << "YES" << std::endl;
		return;
	}
	else
	{
		std::cout << "NO" << std::endl;
		return;
	}

}

int main(void)
{
	int n;
	std::string ps;
	std::string l = "(";
	std::string r = ")";

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int l = 0;

		std::cin >> ps;
		vps(ps);
	}
}