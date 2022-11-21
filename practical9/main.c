#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"

#define MAX_FILE_NAME 100

int get_num_lines(char filename[MAX_FILE_NAME]){

	FILE *fp;
	fp = fopen(filename,"r");
	int ch_read;
	int count =0;
	//When done reading the file
	while((ch_read=fgetc(fp))!=EOF){
		//Count no of new line character
		if(ch_read == '\n'){

			count++;	

		}	

	}

	printf("No. of lines:%d\n",count);
	fclose(fp);
	return count;

}

int main(){

	FILE *f;
	char filename[MAX_FILE_NAME];
	printf("Enter file name: ");//User file input 
	scanf("%s",filename);
	
	int n=get_num_lines(filename);
	f=fopen(filename,"r");
	int i;
	int **magicsq = malloc(n*sizeof(int *));
	
	for(i=0;i<n;i++){

		magicsq[i]=malloc(n*sizeof(int *));
		
	}
	int j;
	for(i=0;i<n;i++){
	
		for(j=0;j<n;j++){
			
			fscanf(f,"%d",&magicsq[i][j]);
		}
	}
	int flag = isMagicSquare(magicsq,n);
	if(flag==1){

		printf("The square is magic.\n");
	}
	else{
	
		printf("The square is not magic.\n");

	}
	
	for(i=0;i<n;i++){

		free(magicsq[i]);	

	}
	
	free(magicsq);
	fclose(f);

	return 0;
	

}


