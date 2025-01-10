#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for(int i = 0; i < intStrs.size();i++) {
        string str = intStrs[i].substr(s,l);
        int num = stoi(str);
        if(num > k) {
            answer.push_back(num);
        }
    }
    return answer;
}