#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int> month_days = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> week = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    
    int total_days = 0;
    
    for(int i = 0; i < a - 1; i++) {
        total_days += month_days[i];
    }
    
    total_days += (b-1);
    
    int day_index = (5 + total_days) % 7;
    
    return week[day_index];
}