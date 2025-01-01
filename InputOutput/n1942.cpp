/*
문제
오늘은 2007년 1월 1일 월요일이다. 그렇다면 2007년 x월 y일은 무슨 요일일까? 
이를 알아내는 프로그램을 작성하시오.

입력
첫째 줄에 빈 칸을 사이에 두고 x(1 ≤ x ≤ 12)와 y(1 ≤ y ≤ 31)이 주어진다. 참고로 2007년에는 1, 3, 5, 7, 8, 10, 12월은 31일까지, 4, 6, 9, 11월은 30일까지, 2월은 28일까지 있다.

출력
첫째 줄에 x월 y일이 무슨 요일인지에 따라 SUN, MON, TUE, WED, THU, FRI, SAT중 하나를 출력한다.
*/

#include <iostream>
#include <map>

int main()
{
	const std::map<int, int> date({ 
		{1, 31}, { 2, 28 }, { 3, 31 }, { 4, 30 }, { 5, 31 }, { 6, 30 }, { 7, 31 }, { 8, 31 } , { 9, 30 }, { 10, 31 }, { 11, 30 }, { 12, 31 }
		});

	int month, day;

	std::cin >> month >> day;

	for (int i = 1; i < month; i++)
	{
		day += date.at(i);
	}

	switch (day % 7)
	{
	case 1:
		std::cout << "MON";
		break;
	case 2:
		std::cout << "TUE";
		break;
	case 3:
		std::cout << "WED";
		break;
	case 4:
		std::cout << "THU";
		break;
	case 5:
		std::cout << "FRI";
		break;
	case 6:
		std::cout << "SAT";
		break;
	case 0:
		std::cout << "SUN";
		break;
	}
}