#include <ctime>   
#include <cstdlib>

int random() {
	srand(time(0));
	int r = (rand() % 101);
	return r;
}