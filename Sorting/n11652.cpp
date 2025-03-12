#include <iostream>
#include <map>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    long long num;
    std::cin >> n;

    std::map<long long, int> sorting;
    int max_count = 0;
    long long min_value = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> num;
        sorting[num]++;

        // 최빈값과 최소값 갱신
        if (sorting[num] > max_count) {
            max_count = sorting[num];
            min_value = num;
        }
        else if (sorting[num] == max_count) {
            min_value = std::min(min_value, num);
        }
    }

    std::cout << min_value;
    return 0;
}
