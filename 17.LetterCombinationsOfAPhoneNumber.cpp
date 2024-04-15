class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        vector<string> vec(8);
        vec[0] = "abc";
        vec[1] = "def";
        vec[2] = "ghi";
        vec[3] = "jkl";
        vec[4] = "mno";
        vec[5] = "pqrs";
        vec[6] = "tuv";
        vec[7] = "wxyz";
        if(digits.length()>=1){
            backTrack(0, "", digits, vec, res);
        }
        return res;
    }
    void backTrack(int i, string current, string digits, vector<string> vec, vector<string> &res){
        if(digits.length() == current.length()){
            res.push_back(current);
            return;
        }

        for(int j = 0; j<vec[(digits[i]-'0') - 2].length(); j++){
            backTrack(i+1, current + vec[(digits[i] - '0') -2][j], digits, vec, res);
        }
    }
};
