#include<stdio.h>
void mergesort(int a[],int low,int mid,int high){
    int i,j,k,b[20];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high){
        if(a[i]>=a[j]){
            b[k++]=a[j++];
        }else{
            b[k++]=a[i++];
        }
    }
    while(i<=mid){
        b[k++]=a[i++];
    }
    while(j<=high){
        b[k++]=a[j++];
    }
    for(i=low;i<=high;i++){
        a[i]=b[i];
    }
    
}
void mergesort(int a[],int low, int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergsort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
int main(){
    int a[20],i,n,low,high;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("The array elements are:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    low=0;
    high=n-1;
    mergesortdiv(a,low,high);
    printf("Array after mergesort:");
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
    return 0;
}
