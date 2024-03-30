1423. Maximum Points You Can Obtain from Cards


class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
          int leftSum =0;
          int rightSum =0;
          int maxSum =0;

          for(int i=0; i<k; i++){
               leftSum += cardPoints[i];
          }
           
           maxSum = leftSum;
         
         int rightIndex = cardPoints.size() -1;

          for(int i=k-1; i >= 0; i--){
              leftSum = leftSum - cardPoints[i];
              rightSum += cardPoints[rightIndex];
              rightIndex = rightIndex -1;

              maxSum = max(maxSum,(leftSum+rightSum));
          }

          return maxSum;
    }
};

Time complexity - O(2*k)
space complexity - O(1)
