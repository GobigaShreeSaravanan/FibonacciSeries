#include <stdio.h>
int* generateFibonacciSeries(int n){
   int i;
  int t1 = 0, t2 = 1;
   int arr[n];
  int nextTerm = t1 + t2;
   arr[0]=t1;
   arr[1]=t2;
   arr[2]=nextTerm;
  for (i = 3; i <= n; ++i) {
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
    arr[i]=nextTerm;
  }
   
  return arr;
}
 
int main() {
    int i=4;
     int *arr1;
    arr1=generateFibonacciSeries(i);
	int sum=sumSeries(arr1,i);
     
}
int sumSeries(int a[],n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
return sum-1;
}