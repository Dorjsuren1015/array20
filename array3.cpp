#include <iostream>
using namespace std;

int main() {
	
    int n, number;

    cin >> n >> number;

    int array[n];

    int i = 0;

     for (i=0; i < n; i++) {

      cin >> array[i];
     }
  
      int j = 0;

     while (number >= array[j] && j < n) 
          ++j;

    number == array[j-1] ? cout << j-1 << endl : cout << j << endl;

   /* if (number == array[j-1]) {
       
        cout << j-1 << endl;
    } else {

        if (number > array[j-1]) {

        }
    } */
     
    return 0;
}