#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int sum1 =0 ,sum2 = 0;
    if(arr1.size() == arr2.size()) {
        for(int i : arr1) sum1+=i;
        for(int j : arr2) sum2+=j;
        
        return sum1 == sum2 ? 0 : sum1 < sum2 ? -1 : 1;
    }
    else {
        return arr1.size() < arr2.size() ? -1 : 1;
    }
}