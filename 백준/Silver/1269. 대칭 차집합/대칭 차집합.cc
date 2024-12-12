#include<iostream>
#include<unordered_set>


int main() {
	int n, m;
	std::cin >> n >> m;

	std::unordered_set<int> A,B;
	for (int i = 0; i < n; ++i) {
		int num;
		std::cin >> num;
		A.insert(num);
	}
	for (int i = 0; i < m; ++i) {
		int num;
		std::cin >> num;
		B.insert(num);
	}
	// 차집합 계산
	int count = 0;

	// (A-B)
	for (const int& elem : A) {
		if (B.find(elem) == B.end()) {
			++count;
		}
	}

	// (B-A)
	for (const int& elem : B) {
		if (A.find(elem) == A.end()) {
			++count;
		}
	}

	std::cout << count << "\n";

	return 0;
}