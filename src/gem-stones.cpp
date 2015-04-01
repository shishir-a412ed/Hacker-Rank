//Hacker Rank Problems.
//Solution to Gem Stones problem.

//To run the program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/gem-stones

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int noOfRocks;
    cin>>noOfRocks; 
    int alpha[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    vector<string> rocks;
    int i,count=0;
    for(i=0;i<noOfRocks;i++)
        {
        string str;
        cin>>str;
        rocks.push_back(str);
        str.clear();
     
    }
    vector<string>::iterator it;
    bool flag;
    for(i=0;i<26;i++)
        {
        flag=true;
        it=rocks.begin();
        for(it;it!=rocks.end();it++)
            {
            string s=*it;
            size_t found=s.find_first_of(alpha[i]);
            if(found!=string::npos)
                   continue;
            else
                {
                flag=false;
                break;
                }
        }
        if(flag)
            count++;
    }
    cout<<count;
    return 0;
}

