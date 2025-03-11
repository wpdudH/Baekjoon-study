#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    int kor, eng, math;
};


bool compare(Student a, Student b) {
    if (a.kor == b.kor && a.eng == b.eng && a.math == b.math) return a.name < b.name;

    if (a.kor == b.kor && a.eng == b.eng) return a.math > b.math;

    if (a.kor == b.kor) return a.eng < b.eng;

    return a.kor > b.kor;
}

int main() {
    int N;
    std::cin >> N;

    std::vector<Student> v(N);
    for (int i = 0; i < N; i++)
        std::cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;

    std::sort(v.begin(), v.end(), compare);

    for (int i = 0; i < N; i++)
        std::cout << v[i].name << '\n';

}
