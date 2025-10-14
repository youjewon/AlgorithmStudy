#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> num_list, int n) {
    return find(num_list.begin(),num_list.end(),n) != num_list.end() ? 1 : 0;
}