#include <string>
#include <cctype>
using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0; // 각 단어 안에서의 인덱스 (0부터 시작)

    for (char c : s) {
        if (c == ' ') {        // 공백이면
            answer += ' ';     // 그대로 추가
            idx = 0;           // 다음 단어로 넘어가므로 인덱스 리셋
        } else {
            if (idx % 2 == 0)  // 단어 내 짝수 번째
                answer += toupper(c);
            else               // 단어 내 홀수 번째
                answer += tolower(c);
            idx++;
        }
    }
    return answer;
}
