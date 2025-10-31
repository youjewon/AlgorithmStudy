#include <string>
#include <vector>
#include <algorithm>


using namespace std;

string solution(string s) {
    string answer = "";
    int size = s.size();
    sort(s.begin(),s.end());
    for(int i = 0;i < s.size()/2;i++) {
        swap(s[i],s[size-1]);
        size--;
    }
    
    return s;
}