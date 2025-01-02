#include <string>
#include <vector>
#include <string>

using namespace std;

int Bignum(int a,int b) {
    string A = to_string(a) + to_string(b);
    int B = 2 * a * b;
    
    if(stoi(A) < B) {
        return B;
    }
    else {
        return stoi(A);
    }
}

int solution(int a, int b) {
    int answer = Bignum(a,b);
    return answer;
}