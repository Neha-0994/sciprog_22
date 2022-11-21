#include<stdio.h>
#include<stdlib.h>

void hanoi(int source, int dest, int inter, int n){
	
	//When number of disc is 1
	if(n==1){

		printf("Move disc from %d to %d\n",source,dest);
	}
	
	else{
	
		hanoi(source,inter,dest,n-1);
		printf("Move disc from %d to %d\n",source,dest);
		hanoi(inter,dest,source,n-1);

	}

}


int main(){

	int r = 3; //No of discs
	hanoi(1,3,2,r);
	return 0;

}
