int min(int tab[],int size){
	int minimum=tab[0];
	for(unsigned int i=1;i<size;++i){
		if(tab[i]<minimum) minimum=tab[i];
	}
	return minimum;
}