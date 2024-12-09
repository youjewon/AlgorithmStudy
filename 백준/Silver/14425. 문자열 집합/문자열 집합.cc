#include<iostream>
#include<unordered_set>
#include<string>

int main() {
    int n,m;
    std::cin >> n >> m;

    std::unordered_set<std::string> s;

    // 집합 S에 문자열 입력
    for(int i = 0; i < n; ++i) {
        std::string str;
        std::cin >> str;
        s.insert(str);
    }

    // 검색할 문자열
    int count = 0;
    for(int i = 0; i < m; ++i) {
        std::string str;
        std::cin >> str;
        if(s.find(str) != s.end()) {
            ++count;
        }
    }

    std::cout << count << std::endl;

    return 0;
}