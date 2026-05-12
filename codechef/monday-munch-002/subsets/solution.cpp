vector<vector<int>> findSubsets(vector<int>& inputNumbers) {
    // write your code here 
    int n=inputNumbers.size();
    int ps=1<<n;
    vector<vector<int>> ans;
    for(int i=0;i<ps;i++)
    {
        vector<int>arr;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            arr.push_back(inputNumbers[j]);
        }
        ans.push_back(arr);
    }
    
    return ans;
    
}
