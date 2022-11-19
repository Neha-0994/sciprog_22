#include<stdio.h>
#include<stdlib.h>

//Allocate the array
int *allocatearray(int n){

	int *a;
	a = (int *) malloc((n)*sizeof(int));
	if(a==NULL){
	printf("Error while allocating memory\n");	
	}
	return a;

}

//Fill with ones
void fillwithones(int *arr, int n){

	int i;
	for(i=0;i<n;i++){
		arr[i]=1;
	}

}

//Print the array
void printarray(int *arr,int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nArray arr[%d] is %d\n",i,arr[i]);
	}
}

//Free memory
void freemem(int *arr){

	free(arr);

	}

int main(){

	int length,*array;
	printf("Enter the size of array:\n");
	scanf("%d",&length);

	array = allocatearray(length);
	fillwithones(array,length);
	printarray(array,length);
	freemem(array);
	array=NULL;

	return 0;

}


