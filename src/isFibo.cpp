//Hacker Rank Problems.
//Solution to Is Fibo problem.

//To run the program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/is-fibo

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isFibo(unsigned long long num)
    {
    unsigned long long first=0;
    unsigned long long second=1;
    unsigned long long third=first+second;
    while(third<=num)
        {
        if(third==num)
                return true;
        else
            {
            first=second;
            second=third;
            third=first+second;
        }
    }
    return false;
}

int main() {
    int T;
    cin>>T;
    unsigned long long num;
    int i=0;
    for(i=0;i<T;i++)
        {
        cin>>num;
        if(isFibo(num))
            cout<<"IsFibo\n";
        else
            cout<<"IsNotFibo\n";      
    }
    return 0;
}

