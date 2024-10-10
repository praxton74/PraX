vector<int> rearrange( vector<int>& arr) 
    {
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            while(arr[i]!=i && arr[i]!=-1)
            {
                int ci=arr[i];
                if(ci<n && arr[ci]!=ci){
                int temp=arr[i];
                arr[i]=arr[ci];
                arr[ci]=temp;}
                else
                arr[i]=-1;
            }
        }
        return arr;
    }
