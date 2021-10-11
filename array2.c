//multidimentional arrays
#include<stdio.h>
int main(){
	int rows = 3;
	int const columns=3;
	int numbers[][columns]={
	            {1,2,3},
	            {4,5,6},
	            {7,8,9}};
	int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("%d",numbers[i][j]);
		}
	} 
	return 0;                      

