void arrange(int *arr, int n)
{
  
    //Write your code here
	int val = 1;
    int i;
    
	  for(i=0;val<=n;i++) {
          arr[i]=val;
          val+=2;
      }
    
    if(n%2==0)	val=n;
    else val= n-1;
    
    for(;val>0;i++)
    {
        arr[i]=val;
        val-=2;
    }
    

}
