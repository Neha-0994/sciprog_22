#include<stdio.h>
#include<math.h>

//Convert degree to radian
float deg_to_radian(float val){
	
	float val_conv;
	val_conv = M_PI*val/180.0;
	return val_conv;

}
//To calculate area using trapezoidal rule
float area(int N, float x, float y, float arr[N+1]){
	
	int i;
	float ar;
	float sum_first = arr[0] + arr[N];
	for(i=1;i<N;i++){

		sum_first += 2*arr[i];
		ar = ((y - x)/(2*N)) * sum_first;
	}
	return ar;	

}

int main(void){
	
	int i=0;
	float a = 0.0, b= 60.0;
	int N=12;
	float size = ((b-a))/N;
	float array_tan[N+1];
	float  output;

	for(i=0;i<=N;i++){
		
		array_tan[i] = tan(deg_to_radian(size*i));		

	}	
	output = area(N, deg_to_radian(a),deg_to_radian(b),array_tan);
	printf("Calculated output : %f \n", output);
	printf("Exact output : %f \n", log(2));
	return 0;

}


