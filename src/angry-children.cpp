//Hacker Rank Problems.
//Solution to Angry children problem.

//To run the program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/angry-children

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void merge(int a[],int low,int mid,int high)
    {
    int *b=new int[high-low+1];
    int i=low,j=mid+1,k=0;
    while(i<=mid && j<=high)
        {
        if(a[i]<=a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
    }
    while(i<=mid)
        b[k++]=a[i++];
    while(j<=high)
        b[k++]=a[j++];
    k--;
    while(k>=0)
        {
        a[low+k]=b[k];
        k--;
    }
}

void mergeSort(int arr[],int low,int high)
    {
    if(low<high)
        {
        int mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

// It is NOT mandatory to use the provided template. You can handle the IO section differently.

int main() {

    /* The code required to enter n,k, candies is provided*/
	
    int N, K, unfairness;
    cin >> N >> K;
    int candies[N];
    int i=0;
    for (i=0; i<N; i++)
        cin >> candies[i];
    
    int size=sizeof(candies)/sizeof(int);
    int low=0,high=size-1;
    mergeSort(candies,low,high);
    int min=candies[K-1]-candies[0];
    for(i=1;i<=N-K;i++)
        {
        unfairness=candies[i+K-1]-candies[i];
        if(unfairness<min)
            min=unfairness;
    }

    /** Write the solution code here. Compute the result, store in  the variable unfairness and output it**/
    
    cout << min << "\n";
    return 0;
}

