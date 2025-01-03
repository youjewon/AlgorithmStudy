#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int last = num_list.back();
    int prev = num_list[num_list.size() - 2];
    
    if(last > prev) {
        num_list.push_back(last - prev);
    }
    else {
        num_list.push_back(last * 2);
    }
    return num_list;
}