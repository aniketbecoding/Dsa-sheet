int maxSubArray(vector<int>& nums) {
      int sum=0;
        int curr=INT_MIN;
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        else{
            for(int i=0;i<n;i++){
                sum+=nums[i];
                curr=max(sum,curr);
                
                if(sum<0){
                    sum=0;
                }
                
            }
        }
       
    return curr;
        
    }
