#include <iostream>
#include <unordered_map>
#include <set>
#include <string>


int main() {
    
    int n;
    std::cin >> n;
    std::unordered_map<std::string,bool> log;

    for(int i = 0; i < n;++i) {
        std::string name, action;
        std::cin >> name >> action;

        if(action == "enter") {
            log[name] = true;
        }
        else if(action == "leave") {
            log[name] = false;
        }
    }

    std::set<std::string, std::greater<std::string>> present;
    for(const auto& [name,isIn] : log) {
        if(isIn) {
            present.insert(name);
        }
    }

    for(const auto& name : present) {
        std::cout << name << "\n";
    }

    return 0;
}