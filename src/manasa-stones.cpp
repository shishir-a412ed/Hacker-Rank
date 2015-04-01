//Hacker Rank Problems.
//Solution to manasa and stones problem.

//To run the program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/manasa-and-stones.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <unordered_set>

using namespace std;


int main() {
   int T;
    cin>>T;
    int n,a,b,result=0;
    char flag;
    queue<int> q1,q2;
    unordered_set<int> unique;
    for(int i=0;i<T;i++)
        {
        cin>>n>>a>>b;
        q1.push(a);
        q1.push(b);
        flag='1';
        for(int j=2;j<n;j++)
            {
            if(flag=='1')
                {
                while(!q1.empty())
                    {
                    result=q1.front();
                    q1.pop();
                    q2.push(result+a);
                    q2.push(result+b);
                    flag='2';
                }
                }
            else
                {
                while(!q2.empty())
                    {
                    result=q2.front();
                    q2.pop();
                    q1.push(result+a);
                    q1.push(result+b);
                    flag='1';
                }
                
            }
        }
            if(flag=='1')
                {
                while(!q1.empty())
                    {
                    result=q1.front();
                    q1.pop();
                    if(unique.insert(result).second)
                        cout<<result<<" "; 
                }
                }
            else if(flag=='2')
                {
                while(!q2.empty())
                    {
                    result=q2.front();
                    q2.pop();
                    if(unique.insert(result).second)
                    cout<<result<<" "; 
                }
            }
            cout<<endl;
            unique.clear();
        }   
    return 0;
}

