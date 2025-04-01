class solution{
    public:

    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        int n=nums.size();
      vector <int> arr;
        for(int i=0;i<n;i++){
            int k=target-nums[i];
            if(m.find(k) != m.end()  ){
               arr.push_back(i);
               arr.push_back(m[target-nums[i]]);
               break;
            }
            m[nums[i]]=i;
        }
        return arr;
    }




}