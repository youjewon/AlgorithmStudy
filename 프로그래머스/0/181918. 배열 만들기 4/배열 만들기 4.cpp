#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    for(int i = 0;i < arr.size();) {
        if(stk.empty()) {
            stk.push_back(arr[i]);
            i++;
        }
        else{
            if(stk.back() < arr[i]) {
                stk.push_back(arr[i]);
                i++;
            }
            else if(stk.back() >= arr[i]) {
                stk.pop_back();
            }
        }
    }
    return stk;
}