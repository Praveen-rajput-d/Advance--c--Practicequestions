#include<stdio.h>
#include<stdlib.h>
void printarray(int *a,int n){
    int i;
    for(i=0;i<n;i++){
     printf("%d\t",a[i]);
    }
    printf("\n\n");
}
int partition(int a[],int low,int high){
    int pivot=a[low];
    int i=low+1;
    int j=high;
    int temp;
    do{
    while(a[i]<=pivot){
        i++;
    }
    while(a[j]>pivot){
        j--;
    }
    if(i<j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }
    while(i<j);
    temp=a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;
}
void quicksort(int a[],int low,int high){
    int partitionIndex;
    if(low<high){
    partitionIndex=partition(a,low,high);
    quicksort(a,low,partitionIndex-1);
    quicksort(a,partitionIndex+1,high);
    }
}
int main(){
    int a[]={1,5,4,9,2,3};
    int n=6;
    printarray(a,n);
    quicksort(a,0,n-1);
    printarray(a,n);
    return 0;

}




