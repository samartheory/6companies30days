class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        map<string,vector<string>>hash;
        for(auto it:string_list){
            string s=it;
            sort(s.begin(),s.end());
            hash[s].push_back(it);
        }
        
        vector<vector<string>>ans(hash.size());
        int id=0;
        for(auto it:hash){
           auto temp=it.second;
            for(int i=0;i<temp.size();i++){
                ans[id].push_back(temp[i]);
            }
            id++;
        }
        return ans;
    }
};
