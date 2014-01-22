int max(int tab[],int size){
	int maximum=tab[0];
	for(unsigned int i=1;i<size;++i){
		if(tab[i]>maximum) maximum=tab[i];
	}
	return maximum;
}