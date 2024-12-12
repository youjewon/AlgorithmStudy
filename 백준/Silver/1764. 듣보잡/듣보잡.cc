#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>

int main() {
	int n, m;
	std::unordered_set<std::string> names;
	std::vector<std::string> result;
	std::cin >> n >> m;

	// 듣지 못한 사람
	for (int i = 0; i < n; ++i) {
		std::string name;
		std::cin >> name;
		names.insert(name);
	}

	// 보지 못한 사람
	for (int i = 0; i < m; ++i) {
		std::string name;
		std::cin >> name;
		// 듣지 못한 사람의 명단에 있으면 교집합 추가
		if (names.find(name) != names.end()) {
			result.push_back(name);
		}
	}

	std::sort(result.begin(), result.end());

	std::cout << result.size() << "\n";
	for (const auto& name : result) {
		std::cout << name << "\n";
	}
	return 0;
}