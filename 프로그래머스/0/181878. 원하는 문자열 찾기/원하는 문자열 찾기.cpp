#include <string>
#include <vector>
#include <cctype>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(auto& c : myString) {
        c = tolower(c);
    }
    for(auto& c : pat) {
        c = tolower(c);
    }
    
    return (myString.find(pat) != string::npos) ? 1 : 0;
}