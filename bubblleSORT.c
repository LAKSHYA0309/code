#include <stdio.h>
void bubblesort (int a[], int n){
  int round,i,temp;
  for (round =1; round <=n-1; round ++){
    for (i=0; i<=n-1-round; i++){
      if (a[i] > a[i+1]){
        temp=a[i];
        a[i]= a[i+1];
        a[i+1] = temp;
      }
    }
  }
}
void show(int a[], n){
  for (int i=0; i<n; i++){
    printf (" %d ", a[i]);
  }
}
int main () {
  int a[]=  {12,23,11,9,0,88};
  bubblesort(a, 6);
  show(a, 6);
}