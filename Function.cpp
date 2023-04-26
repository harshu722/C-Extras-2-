void Function(int n){
	int i=1,s=1;
	//s is increasing not at rate 1 but i 
	while(s<=n){
		i++;
		s=s+i;
		printf("*");
	}
}
