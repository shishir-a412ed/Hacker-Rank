//Hacker Rank Problems.
//Solution to Chocolate feast problem.

//To run the program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/chocolate-feast

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,c,m;
    int noOfWrappers;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        int answer=0;
        // Computer answer
        answer=n/c;
        noOfWrappers=answer;
        while(noOfWrappers>=m)
             {
             noOfWrappers=noOfWrappers-m;
             answer++;
             noOfWrappers++;
             }
                                                                             
             cout<<answer<<endl;
             }
             return 0;
}
