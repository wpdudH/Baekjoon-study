/*
문제:
계단 오르기 게임은 계단 아래 시작점부터 계단 꼭대기에 위치한 도착점까지 가는 게임이다.
문제 링크:
https://www.acmicpc.net/problem/2579

입력:
입력의 첫째 줄에 계단의 개수가 주어진다.

둘째 줄부터 한 줄에 하나씩 제일 아래에 놓인 계단부터 순서대로 각 계단에 쓰여 있는 점수가 주어진다. 
계단의 개수는 300이하의 자연수이고, 계단에 쓰여 있는 점수는 10,000이하의 자연수이다.

출력:
첫째 줄에 계단 오르기 게임에서 얻을 수 있는 총 점수의 최댓값을 출력한다.
*/
#include <iostream>
#define MAX 300 + 1

int N;
int Arr[MAX] = { 0, };
int DP[MAX] = { 0, };

int Bigger(int a, int b)
{
	return (a > b) ? a : b;
}

int main()
{
	std::cin >> N;

	for (int i = 1; i < N + 1; i++)
	{
		std::cin >> Arr[i];
	}

	DP[1] = Arr[1];

	for (int j = 2; j < N + 1; j++)
	{
		DP[j] = Arr[j] + Bigger(Arr[j - 1] + DP[j - 3], DP[j - 2]);
	}

	std::cout << DP[N];

	return 0;
}