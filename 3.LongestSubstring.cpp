class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int b = 0;
        int max = 0;
        for(int j = 1; j<s.length(); j++){
            for(int i = b; i<j; i++){
                if(s[j] == s[i]){
                    b=i+1;
                }
                
            }
            cout<<"b: "<<b<<" "<<s[b]<<" "<<s[j]<<" j: "<<j<<endl;

            if(max<(j-b+1)){
                max = j-b+1;
            }
        }
        if(s.length()==1){
            return 1;
        }
        return max;

    }

    
};
