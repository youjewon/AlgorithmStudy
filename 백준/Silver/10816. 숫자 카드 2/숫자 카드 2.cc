#include<iostream>
#include<vector>
#include<unordered_map>

int main() {
	int n,m;
	std::cin >> n;
	std::unordered_map<int, int> card_count;
	for (int i = 0; i < n; ++i) {
		int card;
		std::cin >> card;
		card_count[card]++;
	}

	std::cin >> m;
	std::vector<int> queries(m);
	
	for (int i = 0; i < m; ++i) {
		std::cin >> queries[i];
	}

	for (int i = 0; i < m; ++i) {
		std::cout << card_count[queries[i]] << " ";
	}
	std::cout << " ";

	return 0;
}