class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans; 
        // 24 april 2023  // Simran Kumari
        int n1 = nums1.size(); 
        int n2 = nums2.size();
       int i=0, j=0;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
    while(i < n1 && j < n2){
        int n = ans.size();
if(nums1[i] < nums2[j]){
   i++;  
}else if(nums1[i] > nums2[j]){
   j++;  
}else{
    if(n >0 && nums1[i] == ans[n-1]){
   i++; j++;  
   }else{
   ans.push_back(nums1[i]); 
       i++; j++;  
}
    }
    }
 // tc O(n1 + n2)
       // sc O(1)
return ans;

    }
    };


// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> ans;
//         // 24 april 2023  // ankit bhaiya
//         int n1 = nums1.size(); 
//         int n2 = nums2.size();
//         int i=0, j=0;
//         sort(nums1.begin(), nums1.end());
//         sort(nums2.begin(), nums2.end());

//     while(i < n1 && j < n2){
//         int n = ans.size();

//         if(nums1[i] < nums2[j]){
//             i++; 
//     }else if(nums1[i] > nums2[j]){
//             j++;  
//     }else{
//         if(n > 0 && nums1[i] == ans[n-1])
//             i++, j++;
//         else{    
//             ans.push_back(nums1[i]);
//             i++; j++;
//         }  
//     }

//     }
//     return ans;

//     }

// };