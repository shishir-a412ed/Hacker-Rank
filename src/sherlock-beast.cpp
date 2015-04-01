//Hacker Rank Problems.
//Solution to Sherlock and the beast problem.

//To run the program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/sherlock-and-the-beast

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T,N;
    int x,y,i,j,k;
    int notFound=-1;
    cin>>T;
    bool flag;
    for(int k=0;k<T;k++)
        {
        cin>>N;
        y=N/3+1;
        flag=true;
        for(;y>=0;y--)
            {
            x=0;
            for(;x<=(N/3+1);x++)
                {
                if((5*x+3*y)==N)
                    {
                    flag=false;
                    break;
                }
            }
         if(flag==false)
             break;
        }
        if(flag)
            cout<<notFound;
        else
            {
        for(i=0;i<3*y;i++)
            cout<<5;
        for(j=0;j<5*x;j++)
            cout<<3;
        }
        cout<<endl;
    }
    return 0;
}

