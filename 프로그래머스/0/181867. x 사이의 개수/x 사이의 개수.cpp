#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int num = 0;
    for(int i = 0; i < myString.size();i++) {
        if(myString[i] == 'x') {
            answer.push_back(num);
            num = 0;
        }
        else {
            num++;
        }
    }
    answer.push_back(num);
    return answer;
}