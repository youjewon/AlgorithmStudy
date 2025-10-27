#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    int n = my_string.size();

    for (int i = 0; i < n / m + (n % m ? 1 : 0); i++) {
        int idx = i * m + (c - 1);  // 각 행의 c번째 문자 인덱스
        if (idx < n)                // 문자열 범위 체크
            answer += my_string[idx];
    }

    return answer;
}