#include<stdio.h>

//Iterative GCD
int iterative(int a,int b){

	
	int temp;
	while(b!=0){
	
	temp=b;
	b=a%b;
	a=temp;
	}
	
	return a;

}

//Recursive GCD
int rec(int a, int b){

	if(b==0){
		return a;	
	}
	else{

	return rec(b,a%b);
	}

}

int main(){

	int a,b,count;

	printf("Enter 2 positive numbers:\n");
	count=scanf("%d %d",&a,&b);
	
	//To check if less than 2 numbers are entered
	if(count!=2){
	printf("Please enter 2 numbers");
	}
	
	//To check if 2 integers are not positive
	if(a<=0 || b<=0){
	printf("Numbers are not positive\n");
	}

	printf("GCD using iterative function is %d\n",iterative(a,b));
	printf("GCD using recursion is %d\n",rec(a,b));
	return 0;

}



