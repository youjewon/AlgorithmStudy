#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(auto& c : myString) {
        answer += tolower(c);
    }
    return answer;
}