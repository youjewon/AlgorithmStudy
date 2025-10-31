#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int cp = 0;
    int cy = 0;
    
    for(auto c : s) {
        if(c == 'p' || c == 'P') cp++;
        else if(c == 'y' || c == 'Y') cy++;
    }
    if(cp != cy) answer = false; 

    return answer;
}