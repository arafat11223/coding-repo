vector<int>v={2,3,4,5,6,8};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>::iterator it;
    it=v.begin();
    for( it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;

    }