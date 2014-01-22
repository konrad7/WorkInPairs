#include <ctime>   
#include <cstdlib>
#include <iostream>

int* random() {
	srand(time(0));
	int* tab=new int[10];
	for (int i = 0; i < 10; ++i) {
		int r = (rand() % 101);
		tab[i] = r;
	}
	return tab;
}

int sum(int* tab, int size) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += tab[i];
	}
	return sum;
}

int min(int tab[], int size){
	int minimum = tab[0];
	for (unsigned int i = 1; i<size; ++i){
		if (tab[i]<minimum) minimum = tab[i];
	}
	return minimum;
}

int max(int tab[], int size){
	int maximum = tab[0];
	for (unsigned int i = 1; i<size; ++i){
		if (tab[i]>maximum) maximum = tab[i];
	}
	return maximum;
}

void print(int* tab, int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << tab[i] << " ";
	}
	std::cout << std::endl;
}