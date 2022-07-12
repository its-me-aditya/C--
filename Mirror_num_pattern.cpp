#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin >>n;
    int i = 1;
    while (i <= n) {
        int space = 1;
        while( space <= n - i) {
            cout << ' ';
            space = space + 1;
         } 
         int k = 1;
            while ( k <= i) {
            cout << k;
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    }
}


