#include <ctime>   
#include <cstdlib>
#include <iostream>

int* random() {
	srand(time(0));
	int tab[10];
	for (int i = 0; i < 10; ++i) {
		int r = (rand() % 101);
		tab[i] = r;
	}
	return tab;
}

int sum(int* tab) {
	int sum = 0;
	for (int i : tab) {
		sum += i;
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

void print(int* tab) {
	for (int i : tab) {
		std::count << i << " ";
	}
	std::cout << std::endl;
}