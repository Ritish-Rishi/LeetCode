class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int freq[201]= { 0 };
        int o=200;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)freq[100+nums[i]]++;
        int max=*max_element(freq,freq+201);
        for(int k=1;k<=max;k++){
            while(o>=0){
                if(freq[o]==k){
                    for (int l=0; l<k; l++){
                        ans.push_back(o-100);  
                    }       
                }
                o--;
            }
            o=200;
        }
        return ans;
    }
};
