#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n],i,j,temp;
    printf("Enter the values of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=n;i>0;--i){
        for(j=0;j<i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
     
    printf("sorted Result:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}

