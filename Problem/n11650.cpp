#include <iostream>
#include <algorithm>

struct coord {
	int x;
	int y;
};

bool compare(coord a, coord b) {
	if (a.x == b.x) {			
		return a.y < b.y;		
	}
	else {						
		return a.x < b.x;		
	}
}

int main(void) {

	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n, tmp;
	std::cin >> n;

	coord arr[100001];

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i].x >> arr[i].y;
	}

	std::sort(arr, arr + n, compare);

	for (int i = 0; i < n; i++) {
		std::cout << arr[i].x << " " << arr[i].y << "\n";
	}


	return 0;
}