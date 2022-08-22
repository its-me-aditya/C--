void rotate(int *input, int d, int n)
{
    int *temp = new int[n];
    int j = 0;
    for(int i = d; i < n; i++){
        temp[j] = input[i];
        j++;
    }
    
    for(int i = 0; i < d; i++){
        temp[j] = input[i];
        j++;
    }
    
    for(int i = 0; i < n; i++){
        input[i] = temp[i];
    }
    
    delete [] temp;
}
