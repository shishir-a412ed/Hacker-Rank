//Hacker Rank Problems.
//Solution to Filling Jars problem.

//To run this program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/filling-jars

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    long long N,M;
    long long a,b,k;
    long long candies=0;
    cin>>N>>M;
    for(long long i=0;i<M;i++)
        {
        cin>>a>>b>>k;
        candies=candies+(b-a+1)*k;
    }
    cout<<candies/N<<endl;
    return 0;
}

