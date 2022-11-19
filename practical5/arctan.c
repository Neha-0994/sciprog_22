#include<stdio.h>
#include<math.h>

double arctanh1(const double x,const  double delta){
	
	int n=0;
	double arctan = 0;
	double ele,value;
	do{
		
		value=2*n+1;
		ele = pow(x,value)/value;
		arctan+=ele;
		n++;
	
	}while(fabs(ele)>=delta);
	return arctan;
}

double arctanh2(const double x){

	return (log(1+x) - log(1-x))/2;

}

int main(){
	int j;
	int length = 1000;
	double delta,x;
	double tan1[length],tan2[length];
	printf("Enter a real positive number for precision: \n");
	scanf("%lf",&delta);
	while(x<=0.9 && j<length){
	
		tan1[j]=arctanh1(x,delta);
		tan2[j]=arctanh2(x);
		printf("The difference when x=%lf is %.10lf \n ",x,fabs(tan1[j]-tan2[j]));
		j++;
		x=x+0.1;

	}
	return 0;

}
