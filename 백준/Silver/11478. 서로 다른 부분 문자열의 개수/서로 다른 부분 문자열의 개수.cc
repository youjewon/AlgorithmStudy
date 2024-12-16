#include <iostream>
#include<unordered_set>
#include<string>

int main() {
    std::string s;
    std::cin >> s;

    std::unordered_set<std::string> substrings;

    for(int i = 0; i < s.size();++i) {
        std::string temp = "";
        for(int j = i; j < s.size();++j) {
            temp += s[j];
            substrings.insert(temp);
        }
    }

    std::cout << substrings.size() << "\n";

    return 0;
}