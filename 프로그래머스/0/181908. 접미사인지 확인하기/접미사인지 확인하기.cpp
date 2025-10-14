#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    if(my_string.size() < is_suffix.size()) return 0;
    int answer = 1;
    int idx = my_string.size() - is_suffix.size();
    for(int i = 0; i < is_suffix.size();i++) {
        if(my_string[idx + i] != is_suffix[i]) return 0;
    }
    return 1;
}