#include<stdio.h>
int main(){
	int n,i;
	printf("The size of the array is:");
	scanf("%d",&n);
	int arr1[n], max,min,large;
	int arr2[n];
	printf("\nThe elements of the array is:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++){
		printf("\n%d",arr1[i]);
	}
	// for the maximum and minimum elements//
	max=arr1[0];
		min=arr1[0];
		large=arr1[0];
	for(i=1;i<n;i++){
		if(arr1[i]>max){
			max=arr1[i];
		}
		if(arr1[i]<min){
			min=arr1[i];
		}
		if(arr1[i]>large){
			large=arr1[i];
		}
	}
	//copy the firstt array elements to the second array//
	
	for(i=0;i<n;i++){
		arr2[i]=arr1[i];
	}
	printf("\nThe maximum elements of array is:%d\n",max);
	printf("\nThe minimum elements of array is:%d\n",min);
	printf("\nThe large elements of array is:%d\n",large);
	printf("The second array elements is given below:");
	for(i=0;i<n;i++){
		printf("%d\t",arr2[i]);
	}

	
	
	
	
	return 0;
}
