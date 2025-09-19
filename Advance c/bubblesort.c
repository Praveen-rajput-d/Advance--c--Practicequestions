#include<stdio.h>
int main(){
  int n,i;
  printf("Enter the number of elements:");
  scanf("%d",&n);
  int a[n],j,temp;
  printf("Enter the elements:\n");
 for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
 printf("The unosrted elements of array are:\n");
  for(i=0;i<n;i++){
    printf("%d\n",a[i]);
  }
 for(i=n;i>0;i--){
    for(j=0;j<i-1;j++){
      if(a[j]>a[j+1]){
       temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  printf("The sorted elements:\n");
 for(i=0;i<n;i++){
   printf("%d\n",a[i]);
  }
  return 0;

}



