void swapAlternate(int *arr, int size)
{

    int i = 0   ;
    while(i < size - 1){
       int j = i + 1;
        int temp =  arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i = i + 2;
         }
}
