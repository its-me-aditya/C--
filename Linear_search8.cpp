int linearSearch(int *arr, int n, int x)
{
    //Write vyour code he
 int ans = - 1;
    for(int i = 0; i < n ; i++){
        if(x == arr[i]){
            ans = i;
        }
    }
    return ans;
}
