### Remove duplicate elements from the sorted array and put all distinct elements in the begining of the array in the same order

- NAIVE METHOD:
- ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/fc961ba7-ba38-45a9-8587-156eea532538)
- Time: O(n)
- Space: O(n)

- EFFICIENT METHOD:
- ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/9294cd49-7d68-4a2f-ad6e-9566f1a7d6d6)
- Time: O(n)
- Space: O(1)

### Given a sorted integer array, remove some duplicates in-place such that each unique element appears at most k times. The relative order of the elements should be kept the same.

-     int removeDuplicates(vector<int>& nums, int k) {
  
          int i = 0, idx = 0;
          for(i = 0; i < nums.size(); i++){
              if((idx < k) || (nums[i] > nums[idx-k])){
                  nums[idx++]=nums[i];
              }
          }
      
          return idx;
      }

- It is the generalize method for removing duplicates and if asked to have atmost k duplicates then also we can use this. k can be any positive value (1,2,3,4..) but it should be less than the array size.
