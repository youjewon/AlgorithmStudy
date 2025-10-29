#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    unordered_map<string,pair<int,int>> dir = {
        {"N", {-1,0}}, {"S", {1,0}},
        {"W", {0,-1}}, {"E",{0,1}}
    };
    
    int H = park.size();
    int W = park[0].size();
    
    int x,y;
    for(int i = 0;i < H;i++) {
        for(int j = 0;j < W;j++) {
            if(park[i][j] == 'S'){
                y = i;
                x = j;
            }
        }
    }
    
    for(auto route : routes) {
        stringstream ss(route);
        string op;
        int n;
        ss >> op >> n;
        
        int ny = y, nx = x;
        bool valid = true;
        
        for(int i = 0;i < n;i++) {
            ny += dir[op].first;
            nx += dir[op].second;
            
            if(ny < 0 || nx < 0 || ny >= H || nx >= W || park[ny][nx] == 'X') {
                valid = false;
                break;
            }
        }
        if (valid) { y = ny; x = nx; }
    }
    return {y,x};
}