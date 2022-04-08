class KthLargest {
    private:
    priority_queue<int,vector<int>,greater<int>>z;
    int r=0;
    public:
    KthLargest(int k, vector<int>& nums) {
        for(auto i:nums)
            z.push(i);
        r=k;
        //sort(z.begin(),z.end());
        
    }
    
    int add(int val) {
        z.push(val);
        while(z.size()>r)
        {
            
            z.pop();
        }
        return z.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */