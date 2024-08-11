void swap(int*x,int*y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int partitionArray(int input[], int start, int end) {
	// Write your code here
	int x=input[start];
	int count=0;
	for(int i=0; i<=end; i++){
		if(input[i]<x){
			count++;
		}
	}
	int pos=start+count;
	swap(&input[pos],&x);

	int i=start, j=end;
	
	while(i<pos && j>pos){
		if(input[i]<=x){
			i++;
		}
		else if(input[j]>=x){
			j--;
		}
		else{
			swap(&input[i],&input[j]);
			i++;
			j--;
		}
	}
	return pos;

}

void quickSort(int input[], int start, int end) {
	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		Change in the given array itself.
		Taking input and printing output is handled automatically.
	*/
	if(start>=end){
		return;
	}
	int pi= partitionArray(input, start, end);
	quickSort(input, start, pi-1);
	quickSort(input, pi+1, end);

}