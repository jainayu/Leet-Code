class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> dist(num_people);
        for (int i = 0; candies > 0; candies -= i) {
            dist[i % num_people] +=  min(candies, i + 1);
            i++;
        }
        return dist;
    }
};
