#include<iostream>
#include<vector>
#include<algorithm>
#include<string>


int main() {
	
	
    int n;
    std::cin >> n;

    std::vector<std::pair<int,std::string>> members;
    for(int i = 0;i < n; ++i) {
        int age;
        std::string name;
        std::cin >> age >> name;
        members.emplace_back(age, name);
    }

    std::stable_sort(members.begin(),members.end(),
                    [](const std::pair<int,std::string>& a,const std::pair<int,std::string>& b) {
        return a.first < b.first;
    });

    for(const auto& member : members) {
        std::cout << member.first << " " << member.second << "\n";
    }
	
    return 0;
}