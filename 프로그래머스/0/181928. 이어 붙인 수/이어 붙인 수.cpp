#include <string>
#include <vector>

using namespace std;



int solution(vector<int> num_list) {
    int answer = 0;
    string oddNum, evenNum = "";
    for(int i = 0 ; i < num_list.size(); i++) {
        if(num_list[i]%2 == 0) {
            evenNum += to_string(num_list[i]);
        }
        else {
            oddNum += to_string(num_list[i]);
        }
    }
    answer = stoi(evenNum) + stoi(oddNum);
    
    return answer;
}