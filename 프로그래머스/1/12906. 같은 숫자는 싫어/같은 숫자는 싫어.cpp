#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int a = -1;

    for(int num : arr) {
        if(num != a) {
            answer.push_back(num);
            a = num;
        }
    }
    
    return answer;
}