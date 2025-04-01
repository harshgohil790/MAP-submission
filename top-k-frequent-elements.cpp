class solution{
    public:


    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
          m[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
       
        for(auto x:m){
          pq.push(make_pair(x.second,x.first));
        }
         for(;pq.size()>k;){
         pq.pop(); 
        
       }
        vector<int>ans;
        while(!pq.empty()){
          pair<int,int>temp=pq.top();
          pq.pop();
          ans.push_back(temp.second);
        }
       return ans;
      }
    

}