#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer = rny_string;
    size_t pos = 0;
    while((pos = answer.find("m",pos)) != string::npos) {
        answer.replace(pos,1,"rn");
        pos+=2;
    }
    
    return answer;
}