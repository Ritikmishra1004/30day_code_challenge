/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
// printf()
for(int i= 0;i < numsSize;i++){
  for(int j=i+1;j<numsSize;j++){
      
    int sum=nums[i]+nums[j];
    if (sum==target){
      
      int* Array = malloc(2 * sizeof(int));
      Array[0] = i;
      Array[1] = j;
      *returnSize = 2;
      return Array;
    }


  }



}
*returnSize = 2;
return 0;
}