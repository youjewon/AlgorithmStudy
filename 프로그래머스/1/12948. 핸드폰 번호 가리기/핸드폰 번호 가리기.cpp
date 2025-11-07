#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int s = phone_number.size();
    
    for(int i = 0;i < s - 4;i++) {
        answer += "*";
    }
    for(int i = s - 4;i < s;i++) {
        answer += phone_number[i];
    }
    return answer;
}