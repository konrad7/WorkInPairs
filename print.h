#include <iostream>

void print(int* tab) {
	for (int i : tab) {
		std::count << i << " ";
	}
	std::cout << std::endl;
}