#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    auto answer = find(seoul.begin(),seoul.end(),"Kim");
    int idx = distance(seoul.begin(),answer);
    return "김서방은 " + to_string(idx) + "에 있다";
}