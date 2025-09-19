#include<stdio.h>
int main(){
	int a[3][3],b[3][3],i,j,k,c[3][3];
	printf("enter the values of first matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is :\n");
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
			printf("%d",a[i][j]);
		}
	}
	printf("\nenter the elements of second matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nThe second matrix is:\n");
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
			printf("%d",b[i][j]);
		}
		}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=0;
			for(k=0;k<3;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
			
		}
	}
	printf("\nThe multiplication of the matrix is :\n");
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
		
		printf("%d\t",c[i][j]);
	}
}
return 0;
}

