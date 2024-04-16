#include <map>
class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int i = 0;
        int sum = 0;

        for(i = 0; i<s.length()-1; i++){
            cout<<"Current: "<<s[i]<<endl;
            if(mp[s[i]]<mp[s[i+1]]){
                int l = mp[s[i+1]] - mp[s[i]];
                i++;
                sum+=l;
                cout<<"Next: "<<s[i]<<endl;

            }else{
                sum+=mp[s[i]];
            }
        }
        if(i<s.length()){
            sum+=mp[s[i]];
        }
        return sum;
    }
};
