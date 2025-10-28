#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int lux = 50,luy = 50;
    int rdx = 0,rdy =0;
    for(int i = 0;i < wallpaper.size();i++) {
        for(int j = 0;j < wallpaper[i].size();j++) {
            if(wallpaper[i][j] == '#') {
                if(lux > i) lux = i;
                if(luy > j) luy = j;
                if(rdx < i) rdx = i;
                if(rdy < j) rdy = j;
            }
        }
    }
    answer = {lux,luy,rdx+1,rdy+1};
    return answer;
}