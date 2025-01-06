#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    for(int i = l; i <= r;i++) {
        int count = 0;
        string str = to_string(i);
        for(int j = 0; j < str.size();j++) {
            if(str[j] == '5' || str[j] == '0') {
                count++;
            }
        }
        if(str.size() == count) {
            answer.push_back(i);
        }
    }
    return (answer.empty()) ? vector<int> {-1} : answer;
}