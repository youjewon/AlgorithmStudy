#include <iostream>
#include <map>
#include <string>
#include<vector>

int main() {
    
    std::map<std::string,int> pokemon;  // 이름과 번호
    std::vector<std::string> name;  // 이름
    int n,m;
    std::string temp;   // 이름과 번호를 입력받는 공간
    std::cin >> n >> m;
    std::vector<std::string> result;    // 찾는 값들을 저장하는 배열
    for(int i = 1;i <= n; ++i) {
        std::cin >> temp;
        name.push_back(temp);
        pokemon.insert(make_pair(temp,i));
    }
    for(int i = 0; i<m; ++i) {
        std::cin >> temp;
        if(temp[0] >= 65 && temp[0] <= 90) {
            result.push_back(std::to_string(pokemon[temp]));
        }
        else {
            result.push_back(name[stoi(temp)-1]);
        }
    }

    for(int i = 0; i < result.size();i++) {
        std::cout << result[i] << "\n";
    }
    
    return 0;
}