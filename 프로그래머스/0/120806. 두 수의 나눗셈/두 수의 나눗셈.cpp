#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    float answer = 0;
    answer = float(num1) / float(num2) * 1000; 
    return answer;
}