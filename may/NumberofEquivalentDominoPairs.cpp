//There is problem that the time limit exceeded
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int count = 0;
        int n = dominoes.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(dominoes[i][0] == dominoes[j][0] && dominoes[i][1] == dominoes[j][1] || 
                    dominoes[i][0] == dominoes[j][1] && dominoes[i][1] == dominoes[j][0]){
                        count++;
                    }
            }
        }
        return count;
    }
};