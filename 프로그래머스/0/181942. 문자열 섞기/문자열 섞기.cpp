#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {
    string answer = "";
    int j,k = 0;
    for(int i = 0;i < str1.length();i++) {
        answer += str1[j++];
        answer += str2[k++];
    }
    return answer;
}