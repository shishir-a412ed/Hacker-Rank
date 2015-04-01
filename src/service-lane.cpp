//Hacker Rank Problems.
//Solution to Service Lane problem.

//To run the program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/service-lane

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,T,entry_index,exit_index;
    int i,j;
    cin>>N>>T;
    int min;
    int *width=new int[N];
    for(i=0;i<N;i++)
        {
        cin>>width[i];
    }

    for(j=0;j<T;j++)
        {
        cin>>entry_index>>exit_index;
        if(exit_index - entry_index + 1 > 1000)
            exit_index=entry_index+999;
        min=width[entry_index];
        for(i=entry_index+1;i<=exit_index;i++)
            {
            if(width[i]<min)
                min=width[i];
        }
        cout<<min<<endl;
    }
    delete(width);
    return 0;
}

