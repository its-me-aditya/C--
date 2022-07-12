#include <iostream> 
using namespace std;
int main() {

 int n;
    cin >> n;
    int i = 1;
    char startingchar = 'A';

    while (i <= n) {
        int j = 1;
        while ( j <= i) {
        	char ch = startingchar + i -1;
            cout <<ch;
           ch++;        
            j++;

        }
        cout << endl;
        i++;
    }
    
}

