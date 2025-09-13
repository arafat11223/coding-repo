cout<<"to DELETE:"<<endl;
    cin>>str;
    int h=hashFunc(str);
    while(table[h]!="")
    {
        if(table[h]==str)
        {
            table[h]="";
            break;
        }
        h++;
        
    }
    cout<<"display:"<<endl;
    for(string str:table)
    {
        if(str!="")
        {
            cout<<str<<endl;
        }
    }