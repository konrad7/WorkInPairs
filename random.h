#include <ctime>   
#include <cstdlib>

int random() {
	srand(time(0));
	r = (rand() % 101);
	return r;
}