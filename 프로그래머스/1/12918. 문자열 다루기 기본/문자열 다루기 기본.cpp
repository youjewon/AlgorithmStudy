#include <string>
#include <vector>
#include <cctype>

using namespace std;

bool solution(string s) {
    bool answer = true;
    int size = s.size();
    if(size == 4 || size == 6) {
        for(auto i : s) {
        if(!isdigit(i)) answer = false;
        }
    }
    else answer = false;
    
    return answer;
}