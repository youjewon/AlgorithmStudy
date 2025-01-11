#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    if(common[1] - common[0] == common[2] - common[1]) {
        return answer = common[1] - common[0] + common[common.size()-1];
    }
    else {
        return answer = common[1]/common[0] * common[common.size()-1];;
    }
}