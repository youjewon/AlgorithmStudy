#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = n_str;
    
    for(char &c : n_str) {
        if(c != '0') break;
        else {
            answer.erase(answer.begin());
        }
    }
    return answer;
}