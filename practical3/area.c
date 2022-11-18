#include<stdio.h>
#include<math.h>

int main(void){

	float a=0.0,b=60.0;
	int N=12, i;
	float b_con, partial,first;

	//Converting pi into pi/3
	b_con = (M_PI*b)/180.0;

	//Calculating first part of sum
	first = tan(0) + tan(b_con);

	//Calculatimg areas for x1, x2...x11
	for (i=5;i<60;i+=5){
		
		first=first+2*tan((M_PI*i)/180.0);
	
	}
	//Add that sum to that of the end points and multiply 
	partial = (M_PI*((b-a)/(2*N)))/180.0;
	first = partial*first;

	printf("Calculated Area under the curve :%f \n" , first);
	printf("Exact area :%f \n", log(2));

	return 0;

}
