#include <stdio.h>
int* generateFibonacciSeries(int n){
   int i;
  int t1 = 0, t2 = 1;
   int arr[n];
  int nextTerm = t1 + t2;
   arr[0]=t1;
   arr[1]=t2;
   arr[2]=nextTerm;
  for (i = 3; i <= n+1; ++i) {
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
    arr[i]=nextTerm;
  }
   
  return arr;
}
 int getEvenNumbers(int* arr,int j){
 for(int a=0;a<j;a++){
     if(arr[a]%2==0){
        printf("%d",arr[a]);
     }
 }
return 0;
}
int sumSeries(int a[],n){
	int sum=0;
	for(int i=0;i<n+1;i++){
		sum+=a[i];
	}
return sum;
 
}

 int getOddNumbers(int* arr[],int j){
 for(int a=0;a<j;a++){
     if(arr[a]%2!=0){
        printf("%d",arr[a]);
     }
 }
return 0;
}
int nthElement(int arr1[],int j){
return arr1[j-1];
}
int getMaxValue(int arr1[],int j){
return arr1[j-1];
}

int main() {
    int i=4;
     int *arr1;
    arr1=generateFibonacciSeries(i);
     getEvenNumbers(arr1,i);
	int sum=sumSeries(arr1,i);
     getOddNumbers(arr1,i);
	int n;
	scanf("%d",&n);
	nthElement(arr1,n);
	getMaxValue(arr1,i);
     
}
 
