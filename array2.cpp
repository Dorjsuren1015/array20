#include <iostream>
using namespace std;

int main() {
	
  int n;

  cin >> n;

  int array[n];

  int i = 0;
  for (i=0; i < n; i++) {

      cin >> array[i];
  }

  i = 0;

  for (int j=1; j < n; j++) {

      if (array[i] != array[j]) {

          i++;
          
          array[i] = array[j];
      }
  }

  for (int j=0; j <= i; j++) {

      cout << array[j] << ",";
  }

	return 0;
}