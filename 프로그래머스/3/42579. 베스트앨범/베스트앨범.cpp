#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    unordered_map<string, int> genrePlayCount;
    unordered_map<string, vector<pair<int, int>>> genreSongs; 
    
    for (int i = 0; i < genres.size(); i++) {
        genrePlayCount[genres[i]] += plays[i];
        genreSongs[genres[i]].emplace_back(plays[i], i);
    }
    

    vector<pair<string, int>> sortedGenres(genrePlayCount.begin(), genrePlayCount.end());
    sort(sortedGenres.begin(), sortedGenres.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second > b.second;
    });
    
    vector<int> answer;
    
    for (const auto& genre : sortedGenres) {
        string genreName = genre.first;
        auto& songs = genreSongs[genreName];
        sort(songs.begin(), songs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.first == b.first) return a.second < b.second; 
            return a.first > b.first; 
        });
        
        for (int i = 0; i < songs.size() && i < 2; i++) {
            answer.push_back(songs[i].second);
        }
    }
    
    return answer;
}
