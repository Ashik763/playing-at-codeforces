
vector<int>v (1000005);
        v[1] = 1;
         for(int i=4;i<=1000000;i=i+2){
            v[i]=1;
        }
   
        for(int i=3;i*i<=1000000;i=i+2){
            if(v[i]==0){
              // v[i]=1;
                 for(int j=i*i;j<=100000;j=j+i*2){
                    v[j]= 1;
                }
            }
           
        }
