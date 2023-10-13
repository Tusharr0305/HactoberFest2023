class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool> checked,present;
        int n=nums.size();
        for(auto it: nums){
           present[it]=true; 
        }
        int longest_chain=0;
        for(int i=0;i<n;i++){
            //current element check bhe nhi hua hai pehele and ye starting element hai
            if(!checked[nums[i]]&&!present[nums[i]-1]){
                int chain=0;
                int start=nums[i];
                while(present[start]){
                    chain++;
                    checked[start]=true;
                    start++;
                    
                }
                longest_chain=max(longest_chain,chain);
            }
        }
        return longest_chain;
    }
};
