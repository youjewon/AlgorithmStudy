#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    vector<int> arr;
    int temp = a;
    for(int i = 0; i < included.size();++i) {
        arr.push_back(temp);
        temp += d;
    }
    for(int i = 0;i < included.size();++i) {
        if(included[i]) {
            answer += arr[i];
        }
    }
    return answer;
}