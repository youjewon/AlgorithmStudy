#include <string>
#include <vector>
#include <unordered_map>


using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    unordered_map<string, int> count;
    
    for(const auto& item : clothes) {
        string type = item[1]; // 의상 종류
        count[type]++;
    }
    
    int combinations = 1;
    for(const auto& pair : count) {
        combinations *= (pair.second +1); // (개수 + 1)곱하기
    }
    
    return combinations - 1;
}