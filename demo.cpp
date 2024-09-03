// write any code to test out your functions here
// run comman "make demo" to run this code
#include <iostream>
#include <string>



int sumOddsTest(int array[], int start, int end){
	int sum = 0;
	for(int i = start; i < end; i++){

		if(array[i]%2 != 0){
			sum = sum + array[i];
		}

	}

	return sum;
}

int main() {
    int myarray[] = { 16,3,75,40,21,40,44,52,40,90,22 };
    
    std::cout << sumOddsTest(myarray, 2, 10) << std::endl;


    
    return 0;
}
