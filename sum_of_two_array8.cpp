void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    int i=size1-1,a,j=size2-1;
    if(size1>size2)
        a=size1;
    else
        a=size2;
    int k=a,carry=0;
    if(size1==0)
    {
        for(int i=size2-1,k=size2;i>=0;--i,--k)
            output[k]=input2[i];
    }
    else if(size2==0)
    {
        for(int i=size1-1,k=size1;i>=0;--i,--k)
            output[k]=input1[i];
    }
    else
    {
        while(i>=0&&j>=0)
        {
            int num=0;
            num=num+input1[i]+input2[j]+carry;
            carry=num/10;
            output[k]=num%10;        
            --i;
            --j;
            --k;
        }
        while(i>=0)
        {
            int num=0;
            num=num+input1[i]+input2[j]+carry;
            carry=num/10;
            output[k]=num%10;  
            --k;
            --i;
        }
        while(j>=0)
        {
            int num=0;
            num=num+input1[i]+input2[j]+carry;
            carry=num/10;
            output[k]=num%10;   
            --k;
            --j;
        }
    }
    //Write your code here
    output[0] = carry;
    
}
