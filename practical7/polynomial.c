#include<stdio.h>
#include<math.h>
#include<stdlib.h>


//Calculate factorial
int factorial(int n){

	if(n<0){
	  printf("Number should be positive \n");
	  return -1;
	}
	else if(n==1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}

}

int main(){

	int i, order;
	double e, *terms;

	//Order of polynomial
	printf("Enter polynomial order:\n");
	if(scanf("%d",&order)!=1){
		printf("Did not enter a number\n");
		return 1;
	}
	
	//Allocation of each term of x
	terms = malloc(order*sizeof(double));
	for(i=0;i<order;i++){
		terms[i] = 1.0/(double)factorial(i+1);
		printf("e term of order %d is %1.14lf\n",order,terms[i]);
	}
	
	e=1.0;	

	for (i=0;i<order;i++){
		e=e+terms[i];
	}
	
	free(terms);

	printf("Estimated value of e is %.10lf with difference %.10lf \n",e,e-exp(1.0));

	return 0;


}
