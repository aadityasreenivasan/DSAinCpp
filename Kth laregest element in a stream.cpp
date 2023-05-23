   //  the TC of the code is O(n*log(k)) for initialization and O(log(k)) for each add() operation.
   // The space complexity is O(k).
class KthLargest {
public:
     
    priority_queue<int,vector<int>,greater<int>> pq;
    int sz;
    KthLargest(int k, vector<int>& nums) {

         sz = k;

        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }

       
        
    }
    