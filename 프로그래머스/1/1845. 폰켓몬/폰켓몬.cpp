#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> nums)
{
    int N = nums.size();
    int maxSelect = N/2;
    
    unordered_map<int, int> freqMap;
    for(int num : nums) {
        freqMap[num]++;
    }
    
    int uniqueCount = freqMap.size();
    
    return min(uniqueCount,maxSelect);
}