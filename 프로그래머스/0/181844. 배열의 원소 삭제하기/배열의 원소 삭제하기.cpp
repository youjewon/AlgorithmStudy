#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    unordered_set<int> del(delete_list.begin(),delete_list.end());
    answer.reserve(arr.size());
    
    
    for(int x : arr) {
        if(del.count(x) == 0) 
        {
            answer.push_back(x);
        }
    }
    return answer;
}