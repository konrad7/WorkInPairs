#include<iostream>
#include"utils.h"

int main(){
	int* tab=random();
	print(tab);
	std::cout<<"Minimum: "<<min(tab)<<std::endl;
	std::cout<<"Maximum: "<<max(tab)<<std::endl;
	return 0;
}

