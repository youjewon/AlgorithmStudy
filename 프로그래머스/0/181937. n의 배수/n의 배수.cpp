#include <string>
#include <vector>

using namespace std;

int multiple(int a,int b) {
    if(a%b == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int solution(int num, int n) {
    int answer = multiple(num,n);
    return answer;
}