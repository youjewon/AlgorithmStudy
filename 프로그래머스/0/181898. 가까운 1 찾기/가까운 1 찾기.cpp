#include <string>
#include <vector>
using namespace std;

int solution(vector<int> arr, int idx) {
    for (int i = idx; i < arr.size(); i++) {  // idx부터 확인
        if (arr[i] == 1) return i;            // 첫 번째 1에서 바로 리턴
    }
    return -1; // 못 찾으면 -1
}