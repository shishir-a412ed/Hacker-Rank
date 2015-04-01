//Hacker Rank Problems.
//Solution to Sherlock and Squares problem.

//To run the program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/sherlock-and-squares

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T,count,i=0;
    unsigned long long A,B;
    unsigned long long temp_square;
    unordered_set<unsigned long long> squares;
    cin>>T;
    unsigned long long j=0;
    for(i=0;i<T;i++)
        {
        count=0;
        cin>>A>>B;
        for(j=1;j<A;j++)    
            {
            temp_square=j*j;
            if(temp_square>B)
                        break;
            else
                squares.insert(temp_square);    
        }
        unordered_set<unsigned long long>::iterator it;
        for(j=A;j<=B;j++)
            {
            it=squares.find(j);
            if(it!=squares.end())
                    count++;
            temp_square=j*j;
            if(temp_square<=B)
                squares.insert(temp_square);
        }
        cout<<count<<endl;
    }
    return 0;
}

