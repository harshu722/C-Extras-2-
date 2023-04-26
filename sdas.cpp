 int fibonacci(int n){
 	int a = 0 , b = 1, sum , i;
 	for (i=0;i<n;i++){
 		sum = a + b;
 		a = b;
 		b = sum;
	 }
	return sum;
 }
