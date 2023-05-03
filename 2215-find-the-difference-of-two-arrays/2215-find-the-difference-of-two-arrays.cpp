class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
         vector<vector<int>> res;
    set<int>temp1;
    
    for(int i = 0; i<nums1.size();i++){
        // finding nums1[i] element in nums2 if it's not in nums2 then we store it in temp1
        if(find(nums2.begin(), nums2.end(), nums1[i]) == nums2.end()){
            temp1.insert(nums1[i]);
        }
    }
    // store temp1 in res
    vector<int>a(temp1.begin(),temp1.end());
    res.push_back(a);
    set<int>temp2;
    for(int i = 0; i<nums2.size();i++){
        // finding nums2[i] element in nums1 if it's not in nums1 then we store it in temp2
        if(find(nums1.begin(), nums1.end(), nums2[i]) == nums1.end()){
            temp2.insert(nums2[i]);
        }
    }
    // store temp2 in res
    res.push_back(vector<int>(temp2.begin(),temp2.end()));
    return res;
    }
};