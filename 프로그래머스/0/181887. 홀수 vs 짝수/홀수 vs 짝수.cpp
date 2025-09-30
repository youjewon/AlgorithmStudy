#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int odd = 0; // 홀수
    int even = 0; // 짝수
    
    for(int i = 0;i < num_list.size(); i++) {
        if(i%2 == 0) {
            even += num_list[i];
        }
        else {
            odd += num_list[i];
        }
    }
    
    answer = (even == odd) ? even : even > odd ? even : odd;
    return answer;
}