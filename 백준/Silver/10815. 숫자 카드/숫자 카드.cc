#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	int n,m;
    std::cin >> n;

    std::vector<int> cards(n);
    for(int i = 0; i < n; ++i)  {
        std::cin >> cards[i];
    }
    // 정렬
    std::sort(cards.begin(),cards.end());
	
    std::cin >> m;
    std::vector<int> queries(m);
    for(int i = 0;i < m;++i) {
        std::cin >> queries[i]; 
    }

    for(int i = 0; i < m; ++i) {
        if(std::binary_search(cards.begin(),cards.end(),queries[i])) {
            std::cout << 1 << " ";
        }
        else {
            std::cout << 0 << " ";
        }
    }
    std::cout << "\n";
    return 0;
}