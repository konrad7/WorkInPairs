#include <ctime>   
#include <cstdlib>

int* random() {
	srand(time(0));
	int tab[10];
	for (int i = 0; i < 10; ++i) {
		int r = (rand() % 101);
		tab[i] = r;
	}
	return tab;
}