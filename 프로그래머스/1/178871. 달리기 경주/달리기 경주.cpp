#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    unordered_map<string,int> rank;
    
    for(int i = 0;i < players.size();i++) {
        rank[players[i]] = i;
    }
    
    for(string name : callings) {
        int idx = rank[name];
        if(idx == 0) continue;
        
        string front = players[idx - 1];
        swap(players[idx], players[idx-1]);
        
        rank[name] = idx - 1;
        rank[front] = idx;
    }
    return players;
}