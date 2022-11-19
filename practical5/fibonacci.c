#include<stdio.h>
#include<math.h>

//To calculate fibonacci series
int fibo(int x){

	if(x==0){
		return 0;
	}

	else if(x==1){
		return 1;
	}

	else{
		return fibo(x-1)+fibo(x-2); 
	}
}

int main()
{
	int n, m= 0, i;
	printf("Enter the positive value of n: \n"); //Number of terms to be printed
	scanf("%d", &n);
	printf("Fibonacci series terms are:\n");
	for(i = 1; i <= n; i++)
	{
		printf("%d ", fibo(m));
		m++;
	}	
	return 0;
}
