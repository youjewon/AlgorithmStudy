#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    sort(num_list.begin(),num_list.end());
    answer.assign(num_list.begin()+5,num_list.end());
    return answer;
}