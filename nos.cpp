int main(){
    int i,j,k;
    int rows, count = 1, num;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    count = 1;
    num = 1+(rows-1)*2;

    for(i=1; i<=rows; ++i)// outer loop parent 
    {
        for(j=1; j<=count; ++j)
    	{
		    printf(" ");
	}
	    for(k=num; k>=1; --k)
	{
		printf("%d",i);
	}
	count++;
	num = num-2;
	printf("\n");
}

return 0;
}
	
