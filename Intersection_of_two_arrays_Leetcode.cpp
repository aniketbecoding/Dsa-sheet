vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> res;
        int i=0;
        int j=0;
        int n=nums1.size();
        int m=nums2.size();
        
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                if(res.empty() || res.back()!=nums1[i]){
                    res.push_back(nums1[i]);

                    i++;
                    j++;
                }
                else{
                    i++;
                    j++;
                }
            }
        }
        return res;
};
};
