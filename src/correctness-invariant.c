//Hacker Rank Problems.
//Solution to Correctness invariant problem.

//To run the program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/correctness-invariant

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *ar) {    
    int i,j;
    int value;
    for(i=1;i<ar_size;i++)
    {
        value=ar[i];
        j=i-1;
        while(j>=0 && value<ar[j])
        {
            ar[j+1]=ar[j];
            j=j-1;
        }
        ar[j+1]=value;        
    }
   for(j=0;j<ar_size;j++)
        {
            printf("%d",ar[j]);
            printf(" ");
        }
}
int main(void) {
   
   int size;
if(scanf("%d", &size)==1);
int *arr=(int *)malloc((sizeof(int))*size); 
    int ar_i;
for(ar_i = 0; ar_i < size; ar_i++) { 
   if(scanf("%d", &arr[ar_i])==1); 
}

insertionSort(size,arr);
    free(arr);
   
   return 0;
}

