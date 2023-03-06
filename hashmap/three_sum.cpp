// in this question we find 3  elements which sum is zero 


#include<bits/stdc++.h>
using namespace std;


// using two pointer 
// firstly sorted the array 
// there are two base case after sorting the array. 1. if the first element is +ve then it means no other element can make it zero
// 2. if array size is < 3 then it return vector of empty vector 
// now we apply 2 pointer 
// in this case we firstly fixed one element then find two element using two pointer which is easy after sorting 
// if fixed number is +ve then break the loop
//Make two pointers high and low, and initialize sum as 0.
// Search between two pointers, just similar to binary search. Sum = num[i] + num[low] + num[high].
// If sum is -ve, means, we need more +ve numbers to make it 0, increment low (low++).
// If sum is +ve, means, we need more -ve numbers to make it 0, decrement high (high--).
// If sum is 0, that means we have found the required triplet, push it in answer vector.
// Now again, to avoid duplicate triplets, we have to navigate to last occurrences of num[low] and num[high] respectively. Update the low and high with last occurences of low and high.
vector<vector<int>>three_sum(vector<int>nums){
  sort(nums.begin() , nums.end());    //Sorted Array
  vector<vector<int> > answer;
        if(nums.size() < 3){    //Base case 1
            return answer;
        }
        if(nums[0] > 0){        //Base case 2
            return answer;
        }
        for(int i = 0 ; i < nums.size() ; ++i){     //Traversing the array to fix the number.
            if(nums[i] > 0){     //If number fixed is +ve, stop there because we can't make it zero by searching after it.
                break;
            }
            if(i > 0 && nums[i] == nums[i - 1]){    //If number is getting repeated, ignore the lower loop and continue.
                continue;
            }
            int low = i + 1 , high = nums.size() - 1;   //Make two pointers high and low, and initialize sum as 0.
            int sum = 0;
            while(low < high){                          //Search between two pointers, just similiar to binary search.
                sum = nums[i] + nums[low] + nums[high];
                if(sum > 0){   //If sum is +ve, means, we need more -ve numbers to make it 0, decreament high (high--).
                    high--;
                } else if(sum < 0){ //If sum is -ve, means, we need more +ve numbers to make it 0, increament low (low++).
                    low++;
                } else {
                    answer.push_back({nums[i] , nums[low] , nums[high]});  //we have found the required triplet, push it in answer vector
                    int last_low_occurence = nums[low] , last_high_occurence = nums[high];  //Now again, to avoid duplicate triplets, we have to navigate to last occurences of num[low] and num[high] respectively
                    while(low < high && nums[low] == last_low_occurence){   // Update the low and high with last occurences of low and high.
                        low++;
                    }
                    while(low < high && nums[high] == last_high_occurence){
                        high--;
                    }
                }
            }
        }
        return answer; 
}

// using hashmap 
// firstly sorted the array
// then we fix one element and find the other two element using hashmap
// if fixed number is +ve then break the loop
// if the sum of two element is equal to -fixed element then push it in the vector
// if the sum of two element is less than -fixed element then increament the low pointer
// if the sum of two element is greater than -fixed element then decreament the high pointer
// now again to avoid duplicate triplets, we have to navigate to last occurrences of num[low] and num[high] respectively. Update the low and high with last occurences of low and high.
vector<vector<int> >three_sum1(vector<int>nums){
 sort(nums.begin() , nums.end()); 
 vector<vector<int> > answer;    //Sorted Array
        if(nums.size() < 3){                // Base Case 1
            return answer;
        }
        if(nums[0] > 0){                    // Base Case 2
            return answer;
        }
        unordered_map<int , int> hashMap;
        for(int i = 0 ; i < nums.size() ; ++i){     //Hashing of Indices
            hashMap[nums[i]] = i;
        }
        
        for(int i = 0 ; i < nums.size() - 2 ; ++i){     //Traversing the array to fix the number.
            if(nums[i] > 0){     //If number fixed is +ve, stop there because we can't make it zero by searching after it.
                break;
            }
            for(int j = i + 1 ; j < nums.size() - 1 ; ++j){     //Fixing another number after first number
                int required = -1*(nums[i] + nums[j]);    //To make sum 0, we would require the -ve sum of both fixed numbers.
                if(hashMap.count(required) && hashMap.find(required)->second > j){ //If it exists in hashmap and its last occurrence index > 2nd fixed index, we found our triplet.
                    answer.push_back({nums[i] , nums[j] , required});
                }
                j = hashMap.find(nums[j])->second; //Update j to last occurence of 2nd fixed number to avoid duplicate triplets.
            }
            i = hashMap.find(nums[i])->second;     //Update i to last occurence of 1st fixed number to avoid duplicate triplets.
        }
        return answer;  //Return answer vector.
}

int main(){
vector<int>arr={-1,0,1,2,-1,-4};
// vector<vector<int>>ans=three_sum(arr);
// for(auto i:ans){
//     for(auto j:i){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }
sort(arr.begin(),arr.end());
unordered_map<int,int>m;
for(int i = 0 ;i<arr.size();i++){
   m[arr[i]] = i;
}
cout<<"print map"<<endl;
for(auto a:m){
   cout<<a.first<<" -> "<<a.second<<endl;
}
}