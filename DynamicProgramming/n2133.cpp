#include <iostream>

int main()
{
    int N;
    std::cin >> N;

    int d[31];
    d[0] = 1;
    d[1] = 0;
    d[2] = 3;

    for (int n = 3; n <= N; n++)
    {
        if (n % 2 != 0) d[n] = 0;
        else
        {
            for (int i = 2; i <= N; i += 2)
            {
                if (i == 2) d[n] = d[n - i] * d[2];
                else if ((n - i) >= 0) d[n] += d[n - i] * 2;
            }
        }
    }
    std::cout << d[N];
}