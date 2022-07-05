#include <iostream>
using namespace std;
  
int main(){
    
    int i,n, sum=0;
    
//cout << "Print Sum Of Even Numbers till:";
    cin >> n;
    
    for(i=1;i<=n;i++){
        if((i%2==0)){
            
            sum+=i;
            
        }
    }
    cout <<sum;
    
 //cout endl << "Sum of Even Numbers from 1 to " << n << " is:" << sum;
    
}
