//Hacker Rank Problems.
//Solution to Find digits problem.

//To run the program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/find-digits

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    int i,remainder,count=0;
    unsigned long long num;
    unsigned long long final_num;
    for(i=0;i<T;i++)
        {
        count=0;
        cin>>num;
        final_num=num;
        while(num%10!=num)
            {
            remainder=num%10;
            num=num/10;
            if(remainder==0)
                continue;
            if(final_num%remainder==0)
                count++;
        }
        if(num!=0 && final_num%num==0)
            count++;
        cout<<count<<endl;
    }
    return 0;
}

