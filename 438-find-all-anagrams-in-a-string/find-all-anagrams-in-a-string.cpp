class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.size() < p.size()) return {};

        unordered_map<char,int> freq;

        for(char c : p){
            freq[c]++;
        }

        vector<int> ans;

        int cnt = freq.size();
        int k = p.size();

        for(int i = 0; i < s.size(); i++){

            if(freq.count(s[i])){
                freq[s[i]]--;

                if(freq[s[i]] == 0)
                    cnt--;
            }

            if(i >= k){
                char out_char = s[i-k];

                if(freq.count(out_char)){
                    if(freq[out_char] == 0)
                        cnt++;

                    freq[out_char]++;
                }
            }

            if(i >= k-1 && cnt == 0){
                ans.push_back(i-k+1);
            }
        }

        return ans;
    }
};