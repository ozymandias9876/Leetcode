class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int d=arr[1]-arr[0];
        bool fact=true;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]+d!=arr[i+1])
                fact=false;
        }
        return fact;
        
    }
};