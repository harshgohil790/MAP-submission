class solution{
    public:

    int longestConsecutive(vector<int>& nums) {

        int n=nums.size();
        int l=1;
        unordered_map<int,int>m;
        if(n==0){
           return 0;
        }
        for(int i=0;i<n;i++){
           m[nums[i]]=0;
        }
         
         for(auto z: m){
            if(m.find(z.first-1) == m.end()){
               int c=1;
               int x=z.first;
               while(m.find(x+1) !=  m.end()){
                   x=x+1;
                   c++;
               }
               l=max(l,c);
            }
    
    
         }
     
       return l;
    
    }
}