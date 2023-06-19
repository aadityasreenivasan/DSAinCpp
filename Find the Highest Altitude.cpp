class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt= INT_MIN;
        int presum=0;

        for(int i=0;i<gain.size();i++)
        {
            alt= max(presum,alt);
            presum+=gain[i];
        }

        if(presum>alt)
        alt=presum;

        return alt;
    }
};