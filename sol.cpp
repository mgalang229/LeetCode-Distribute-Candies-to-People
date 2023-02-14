class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int index = 0, cnt = 1;
        vector<int> res(num_people, 0);
        while (candies > 0) {
            res[index%num_people] += min(cnt, candies);
            candies = max(0, candies - cnt);
            cnt++;
            index++;
        }
        return res;
    }
};
