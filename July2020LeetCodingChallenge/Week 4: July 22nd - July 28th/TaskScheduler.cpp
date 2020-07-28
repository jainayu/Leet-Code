class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char, int> map;
        for (auto c:tasks){
            map[c]++;
        }
        struct cmp {
            bool operator()(const pair<char, int> &a, pair<char, int> &b) {
                return a.second < b.second;
            };
        };
        priority_queue<pair<char, int>, vector<pair<char, int>>, cmp> pQueue(map.begin(), map.end());
        int cycles = 0;
        while(!pQueue.empty()){
            vector<pair<char, int>> temp;
            for(int i = 0; i <= n; i++){
                if(!pQueue.empty()){
                    temp.push_back(pQueue.top());
                    pQueue.pop();
                }
            }
            for(auto i: temp){
                if(--i.second > 0){
                    pQueue.push(i);
                }
            }
            cycles += pQueue.empty() ? temp.size() : n + 1;
        }
        return cycles;
        
    }
};
