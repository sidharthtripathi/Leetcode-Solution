class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //base case
        if(numRows == 1){
            vector <int> b = {1};
            vector < vector <int>> ans = {b};
            return ans;
        }
        vector < vector <int>> ans = generate(numRows - 1);
        vector <int> last_row = {1};
        for(int i = 0, j = 1 ; j<ans.back().size() ; i++,j++){
            last_row.push_back(ans.back()[i] + ans.back()[j]);
        }
        last_row.push_back(1);
        ans.push_back(last_row);
        return ans;
    }
};