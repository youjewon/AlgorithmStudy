#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(),numbers.end());
    int n = numbers.size();
    answer = numbers[n-1]* numbers[n-2];
    return answer;
}