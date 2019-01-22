#include <iostream>
using namespace std;

int main() {
	
    int n, number;

    cin >> n >> number; 

    int array[n];

    for (int i=0; i < n; i++) {

        cin >> array[i];      
    }

    for (int i=0; i < n; i++) {

        for (int j=i+1; j < n; j++) {

            if ((array[i] + array[j])== number) {

                cout << i << " " << j;
            }
        }
        
    }

	return 0;
}