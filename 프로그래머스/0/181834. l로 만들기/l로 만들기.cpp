#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = myString;
    for(char &c : answer) {
        if( c >= 'a' && c <= 'l') {
            c = 'l';
        }
    }
    return answer;
}