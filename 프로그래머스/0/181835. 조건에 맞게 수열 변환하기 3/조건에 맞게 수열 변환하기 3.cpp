#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    for(auto i : arr) {
        k%2==1 ? answer.push_back(i*k) : answer.push_back(i+k);
    }
    return answer;
}