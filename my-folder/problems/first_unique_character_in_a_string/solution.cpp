class Solution {
public:
    int firstUniqChar(string s) {
       int arr[128]={0};
        for(auto i:s)
            arr[i]++;
        for(int i=0;i<s.size();i++)
        {
            if(arr[s[i]]==1)
                return i;
        }
        return -1;
    }
};