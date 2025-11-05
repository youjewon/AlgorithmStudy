#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> cloth(n,1);
    for(int i : lost) cloth[i-1]--;
    for(int i : reserve) cloth[i-1]++;
    // [2,0,2,0,2]
    
    for(int i = 0; i < cloth.size();i++) {
        if(cloth[i] == 0) {
            if(i > 0 && cloth[i - 1] == 2) { 
                cloth[i] = 1;
                cloth[i-1] = 1;
            }
            else if(i < n -1 && cloth[i + 1] == 2) {
                cloth[i] = 1;
                cloth[i+1] =1;
            }
        }
    }
    
    for(int i : cloth) {
        if(i>0) answer++;
    }
    return answer;
}