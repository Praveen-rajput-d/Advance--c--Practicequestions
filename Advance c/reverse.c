#include<stdio.h>
int main(){
	int n, arr[100],i;
	printf("Enter the size of array:");
	scanf("%d",&n);
		printf("The elements of array:\n");
	for(i=0;i<n;i++){
	
		scanf("%d",&arr[i]);
	}
	printf("The array elements array are:\n");
	for(i=0; i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	printf("The Reverse order of the array:\n");
	for(i=n; i>=0; i--){
			printf("%d\t",arr[i]);
	}
	return 0;
}
