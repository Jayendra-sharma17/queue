int Secondlargest(vector<int> &a,int n){
    int largest=a[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(a[i]>largest)
        {
                   slargest=largest;
                   largest=a[i];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
        }
        else if(a[i]<largest && a[i]>slargest)
        {
            slargest=a[i];
        }   
                                                                                                                                                                                                                                                                                                                                                                                                      
    }
     return slargest;    
                                                         
}
int Secondsmallest(vector<int> &a,int n)
{
    int smallest=a[0];
    int ssmallest=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(a[i]<smallest)
        {
ssmallest=smallest;
smallest=a[i];
        }
        else if(a[i]!=smallest &&a[i]<ssmallest)
        {
            ssmallest=a[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> &a) {
   int slargest=Secondlargest(a,n);
   int ssmallest=Secondsmallest(a,n);
   return {slargest,ssmallest};
}
