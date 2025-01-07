#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    int nums[4] = {a,b,c,d};
    
    unordered_map<int, int> map;
    
    // key : 파라미터(인스턴스)값, value : 빈도
    // 빈도 계산 로직
    for(int n : nums) map[n] = ++map[n];
    
    unordered_map<int, int> :: iterator it = map.begin();
    unordered_map<int, int> :: iterator it_next = next(map.begin());
    
    // 네 주사위가 모두 같을 때
    if(map.size() == 1) answer = 1111 * a;
    // 세 주사위가 같고 하나가 다른 경우 
    // 나온 주사위의 숫자 수는 2개 이므로 map의 0번째와 1번째를 비교해여
    // value(빈도)가 1(3개는 같고 다른 1개의 숫자)인 숫자를 찾음
    else if(map.size() == 2 && it_next != map.end()) {
        if(it->second == 1 || it_next->second == 1) {
            it->second == 1 ?
                answer = pow(((10 * it_next->first) + it->first),2)
                : answer = pow(((10 * it->first) + it_next->first),2);
        }
        // 주사위가 두 개씩 같은 값인 경우
        else {
            answer = (it->first + it_next->first) * abs(it->first - it_next->first);
        }
    }
    // 두 주사위가 같고, 나머지 두 주사위가 다른 경우
    else if(map.size() == 3) {
        int p;
        for(;it != map.end();it++) {
            if(it->second == 2) {
                // p 두 개의 값이 같은 주사위
                p = it->first;
                break;
            }
        }
            map.erase(p);
            it = map.begin();
            it_next = next(map.begin());
            if(it_next != map.end()) 
                answer = it->first * it_next->first;
    }
    // 네 개의 주사위가 모두 다른 경우
    else if(map.size() == 4) {
        answer = min({a,b,c,d});
    }
    return answer;
}