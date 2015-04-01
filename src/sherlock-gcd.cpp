//Hacker Rank Problems.
//Solution to Sherlock and GCD problem.

//To run the program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/sherlock-and-gcd

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd_compute(int a,int b)
{
if(a==b)
	return a;
else if(a==0)
	return b;
else if(b==0)
	return a;
else if(a>b)
	return gcd_compute(a-b,b);
else if(b>a)
	return gcd_compute(a,b-a);
return -1;
}

int main() {
    int T,N,result;
    bool flag;
    cin>>T;
    for(int i=0;i<T;i++)
       {
        cin>>N;
        int bytes=sizeof(int)*N;
        int *arr=new int[bytes];
        flag=true;
        for(int l=0;l<N;l++)
            cin>>arr[l];
        for(int j=0;j<N;j++)
            {
            for(int k=j+1;k<N;k++)
                {
                if(gcd_compute(arr[j],arr[k])==1)
                    {
                    flag=false;
                    break;
                }
            }
            if(!flag)
                break;
        }
        if(!flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        delete(arr);
    }
       
    return 0;
}

