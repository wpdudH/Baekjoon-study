/*
문제
유진이는 현수의 암호를 알아내려고 한다. 유진이는 사전 조사를 통해 임현수의 컴퓨터에 어떤 문자들이 쓰이는지 알아내었고, 하나씩 대입해보려고 한다. 대입하는 순서는 유진이가 메모한 문자 집합의 순서대로이고, 한 글자부터 암호가 풀릴 때까지 모두 대입해본다.

예를 들어, 메모한 문자 집합이 bca라고 한다면, 유진이는 b, c, a, bb, bc, ba, cb, cc, ca, ab, ac, aa, bbb, bbc, ........ 순서로 암호가 풀릴 때까지 계속 대입해본다.

입력
첫 번째 줄에는 암호로 사용할 수 있는 문자가 공백 없이 주어지고, 두 번째 줄에는 컴퓨터의 암호가 주어진다. 암호에 사용할 수 있는 문자의 종류는 최대 100가지이고, 공백은 사용할 수 없다. 영문자는 대소문자를 구분한다. 암호의 길이는 최대 1,000,000자이다.

출력
첫 번째 줄에 주어진 암호를 몇 번의 시도로 풀 수 있는지 출력한다. 만약 수가 클 경우, 시도 횟수를 900528으로 나눈 나머지를 출력한다.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	string text;
	string password;
	int pos[200];
	int cnt = 0;
	int ans = 0;

	cin >> text >> password;

	long long textLen = text.length();
	long long passwordLen = password.length();

	for (long long i = 0; i < textLen; i++)
	{
		pos[text[i]] = i + 1;
		cnt += 1;
	}
	int g = 1;
	for (long long i = passwordLen - 1; i >= 0; i--)
	{
		ans = (ans + g * pos[password[i]]) % 900528;
		g = g * cnt % 900528;
	}
	
	cout << ans;
	return 0;
}