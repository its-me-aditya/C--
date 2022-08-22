int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int start=0,end=n-1;
    int mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(input[mid]==val)
        {
            return mid;
        }
        else if(val>input[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
