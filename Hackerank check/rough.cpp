int getTotalX(vector<int> a, vector<int> b) {
    int size1=a.size();
    int size2=b.size();
    int count=0,num=0;
    
    for (int i=a[size1-1];i<=b[size2-1] ; i++) {
        for (int j=0; j<size1; j++) {
            if(i%a[j]==0){
                count++;
            }
        }
        if (count==size1) {
            count=0;
            for (int k=0; k<size2; k++) {
                if (b[k]%i==0) {
                    count++;
                }
            } 
        }
        if (count==size2) {
            num++;
        }
        count=0;
        
    }
    return num;
}