/*
����
ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����

������, �������� �������� ������ ��(���� ����)�� ����Ͻÿ�.

�Է�
ù° �ٿ� N(1 �� N �� 100)�� �־�����.

���
ù° �ٺ��� N��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
*/

#include <iostream>

int main()
{
	int num;

	std::cin >> num;

	for (int i = num;i > 0;i--)
	{
		for (int j = i; j > 0; j--)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}

	return 0;
}