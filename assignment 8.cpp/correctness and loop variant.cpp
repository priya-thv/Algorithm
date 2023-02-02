#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void insertionSort(int N, int arr[]) {
    int i;
    for(int i=0;i<N;i++){
        int k=arr[i];
        int j=i-1;
          while(arr[j]>k && j>=0){
            arr[j+1]=arr[j];
            j--;
        }arr[j+1]=k;
    }
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
   
}
int main(void) {

    int N;
    scanf("%d", &N);
    int arr[N], i;
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(N, arr);

    return 0;
}
