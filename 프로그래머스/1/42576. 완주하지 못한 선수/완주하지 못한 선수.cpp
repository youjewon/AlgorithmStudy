#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> frequency;
    for(const string& str : participant) {
        frequency[str]++;
    }
    for(const string& str : completion) {
        frequency[str]--;
    }
    
    for(const auto& pair : frequency) {
        if(pair.second == 1) {
            answer = pair.first;
        }
    }
    
    return answer;
}