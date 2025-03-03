
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,t2=5;
        cin >> a >> b >> c;
        int output=1;

        vector<int> vec = {a,b,c};

        while(t2--)
        {
        sort(vec.begin(),vec.end());
        vec[0]+=1;
        }

       output = vec[0]*vec[1]*vec[2];
       cout << output << endl;


    }


}
