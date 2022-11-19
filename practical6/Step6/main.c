#include<stdio.h>

int main(){

	int n=5,p=3,q=4;
	double A[n][p],B[p][q],C[n][q];
	int i,j,k;

	//Creating matrix A
	for(i=0;i<n;i++){
	    for(j=0;j<p;j++){
	        A[i][j] = i+j;
		
		}
	}
	//Creating matrix B
	for(i=0;i<p;i++){
	    for(j=0;j<q;j++){
		B[i][j]= i-j;
		}
	}

/*	//Matrix multiplication
	for(i=0;i<n;i++){
	    for(j=0;j<q;j++){
		
		C[i][j]=0;
		for(k=0;k<p;k++){
			C[i][j] += A[i][k]*B[k][j];
			}
		}
	}
*/

	//Call function from matmult.c

	matmult( n, p,  q, A,B,C);	

	//Print input array A
	printf("Input Array B is:\n");
	for(i=0;i<n;i++){
	    for(j=0;j<p;j++){
		printf("%3.0f\t",A[i][j]);
		}
	    printf("\n");
	}
	
	//Print input array B
	printf("Input Array B is:\n");
	for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                printf("%3.0f\t",B[i][j]);
                }
            printf("\n");
        }

	//Print matric  C = A*B
	printf("Matrix multiplication is:\n");
	for(i=0;i<n;i++){
            for(j=0;j<q;j++){
                printf("%3.0f\t",C[i][j]);
                }
            printf("\n");
        }
	return 0;
}
