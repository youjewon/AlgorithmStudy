#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int i = x;
    int sum = 0;
    
    while(i > 0) {
        sum += i % 10;
        i /= 10;
    }
    return answer = (x % sum == 0);
}