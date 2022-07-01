class Solution {
public:
    static bool cmp(vector<int>abc,vector<int>xyz)
    {
        return abc[1]>xyz[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        int units=0;
        int i=0;
        while(truckSize>0 and i<boxTypes.size())
        {
            
            if(boxTypes[i][0]<=truckSize)
            {
                units+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            else if(boxTypes[i][0]>truckSize)
            {
                while(boxTypes[i][0]>truckSize)
                {
                    boxTypes[i][0]--;
                }
                units+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            i++;
        }
        return units;
    }
};