#include <iostream>
#include <vector>
#include <algorithm>

bool compare(int a, int b)
{
    return (a < b);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    long long n, k;
    long long num;
    std::cin >> n >> k;

    std::vector<long long> v(n);

    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end(), compare);

    std::cout << v[k-1];
    return 0;
}
