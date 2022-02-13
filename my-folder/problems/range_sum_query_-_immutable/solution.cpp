class NumArray {
    private:
        vector<int>psum={0};
public:
    NumArray(vector<int>& nums) {
        int sum=0;
        //psum.push_back(sum);
        for(auto i:nums)
        {
            sum+=i;
            psum.push_back(sum);
        }
        
        
    }
    
    int sumRange(int left, int right) {

        return (psum[right+1]-psum[left]);
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */