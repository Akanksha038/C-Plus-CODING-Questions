class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {

        int i=0;
        int j=1;

        while(j<nums.size()){

            if((nums[i]%2==0 && nums[j]%2!=0)||(nums[i]%2!=0 && nums[j]%2==0) ){
                i++;
                j++;
            }
            else{
                return false;
            }
        }

        return true;
        
    }
};