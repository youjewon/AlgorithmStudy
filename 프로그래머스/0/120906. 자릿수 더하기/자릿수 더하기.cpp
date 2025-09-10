#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    long long x = n;
    //x = llabs(x);
    string s = to_string(x);
    int answer = 0;
    for(char c : s) answer += c - '0';
    return answer;
}