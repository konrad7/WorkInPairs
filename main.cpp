#include<iostream>
#include"utils.h"

int main(){
	int* tab=random();
	print(tab, 10);
	std::cout<<"Minimum: "<<min(tab, 10)<<std::endl;
	std::cout<<"Maximum: "<<max(tab, 10)<<std::endl;
	std::cout<<"Suma: "<<sum(tab, 10)<<std::endl;
	return 0;
}

