
int isMagicSquare(int **sq, const int n){

	if(n<0){
		return 0;
	}

	int magic_sum=0;
	int diag_sum=0;
	int i,j;
	for (i=0;i<n;i++){

		magic_sum+=sq[i][i];
		diag_sum+=sq[i][n-i-1];
	
	}

	if(diag_sum!=magic_sum){
	
		return 0;

	}
	
	for(i=0;i<n;i++){

		int rowsum=0;
		int colsum=0;
		//Row sum and column sum of sqaure
		for(j=0;j<n;j++){
	
			rowsum+=sq[i][j];
			colsum+=sq[j][i];

		}
		if(rowsum!=magic_sum || colsum!=magic_sum){

			return 0;
		}	

	}

	return 1;
}
