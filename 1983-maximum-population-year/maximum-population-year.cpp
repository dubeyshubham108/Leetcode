class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> p(101, 0);
        for(auto it: logs) {
            p[it[0]-1950]++;
            p[it[1]-1950]--;
        }
        int ans = 0, mx = p[0];
        for(int i=1; i<=100; i++) {
            p[i] = p[i] + p[i-1];
            if(p[i] > mx) {
                mx=p[i];
                ans=i;
            }
        }
        return (ans+1950);
    }
};