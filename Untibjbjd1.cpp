int Exponential(int k, int n){
	if(k == 0)
	   return 1;
	else{
		if(n%2 == 1){
			a = Exponential(k, n-1);
			return a*k2;
		}
		else{
			a = Exponential(k, n/2);
			return a*a;
		}
	}
}

