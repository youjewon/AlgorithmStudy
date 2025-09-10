#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    for(int i = 0;i < s1.size();i++) 
    {
        answer += count(s2.begin(),s2.end(),s1[i]);
    }
    return answer;
}