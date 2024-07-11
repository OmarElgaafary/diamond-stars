#include <iostream>

void spaces();
void reverseodd();



int main() {
	
	spaces();
	reverseodd();

	return 0;
}


void reverseodd() {

	int spaces = -1;
	int x = 9;

	for (int i = 0; i < 6; i++) {
		for (int f = 0; f < 10; f++) {
			
			

			if (f > spaces && f < x) {
				std::cout << "*";
			}
	
			else {
				std::cout << " ";
			}
			
			
			
		}
		x--;
		spaces++;
		std::cout << std::endl;
	}



}
void spaces() {

	int spaces = 4;


	for (int row = 0; row < 4; row++) {

		for (int col = 0; col < 9; col++) {

			if (col < spaces || col >(row * 2) + spaces) {
				std::cout << " ";
			}
			else {
				std::cout << "*";
			}

		}
		spaces--;
		std::cout << std::endl;
	}
}

