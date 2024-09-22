#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
using namespace std;

// Hàm tạo ra tất cả các biến thể của từ bằng cách thay thế từng ký tự bằng '*'
vector<string> generatePatterns(const string& word) {
    vector<string> patterns;
    for (int i = 0; i < word.length(); ++i) {
        string pattern = word;
        pattern[i] = '*';
        patterns.push_back(pattern);
    }
    return patterns;
}

int findShortestPath(string s, string t, vector<string>& words) {
    if (s == t) return 0;
    
    // Tạo map cho các pattern đến từ tương ứng
    unordered_map<string, vector<string>> patternToWord;
    for (const string& word : words) {
        vector<string> patterns = generatePatterns(word);
        for (const string& pattern : patterns) {
            patternToWord[pattern].push_back(word);
        }
    }

    // Sử dụng BFS
    queue<string> q;
    unordered_map<string, int> distance; // Độ dài đường đi ngắn nhất đến mỗi từ
    q.push(s);
    distance[s] = 0;

    while (!q.empty()) {
        string current = q.front(); q.pop();
        int currDist = distance[current];
        
        // Tạo tất cả các biến thể pattern của current
        vector<string> patterns = generatePatterns(current);
        for (const string& pattern : patterns) {
            // Kiểm tra tất cả các từ khớp với pattern này
            if (patternToWord.find(pattern) != patternToWord.end()) {
                for (const string& next : patternToWord[pattern]) {
                    // Nếu chưa được thăm, thêm vào queue
                    if (distance.find(next) == distance.end()) {
                        distance[next] = currDist + 1;
                        q.push(next);
                        // Nếu tìm thấy từ đích, trả về khoảng cách
                        if (next == t) return distance[next];
                    }
                }
            }
        }
    }

    return -1; // Không tìm thấy đường đi
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s, t;
        cin >> n >> s >> t;
        vector<string> words(n);
        for (int i = 0; i < n; ++i) {
            cin >> words[i];
        }

        int result = findShortestPath(s, t, words);
        if (result == -1) {
            cout << 0 << endl; // Không tìm thấy đường đi
        } else {
            cout << result + 1 << endl;
        }
    }
    return 0;
}
