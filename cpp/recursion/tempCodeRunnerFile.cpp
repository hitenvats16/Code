
    vector<int> vec = {10,6,11,5,12,4};
    int target = 16;
    vector<vector<int>> res = SumSubset(vec,target);
    for(auto i: res){
        cout<<"[ ";
        for(auto j: i) cout<<j<<" ";
        cout<<"]"<<endl;    