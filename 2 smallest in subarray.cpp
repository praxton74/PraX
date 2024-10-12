int pairWithMaxSum(vector<int>& arr) 
    {
        // code here
        int maxi=0,sum=0;
        if(arr.size()<2)
        return -1;
        for(int i=0;i<arr.size()-1;i++)
        {
            sum=arr[i]+arr[i+1];
            maxi=max(sum,maxi);
        }
        return maxi;
    }
