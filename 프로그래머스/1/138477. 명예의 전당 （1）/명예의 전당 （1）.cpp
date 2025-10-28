#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> temp;
    for(int i = 0;i < score.size();i++) {
        if(temp.size() < k) {
            temp.push_back(score[i]);
            sort(temp.begin(),temp.end(),greater<int>());
            answer.push_back(temp.back());
        }
        else {
            temp.push_back(score[i]);
            sort(temp.begin(),temp.end(),greater<int>());
            answer.push_back(temp[k-1]);
        }
    }
    
    return answer;
}