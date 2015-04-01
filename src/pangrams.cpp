//Hacker Rank Problems.
//Solution to Pangrams problem.

//To run the program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/pangrams

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <ctype.h>

using namespace std;


int main() {
    char alpha[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char cString[1001];
    cin.getline(cString,1001);
    string str(cString);
    int i=0;
    bool flag=true;
    for(i=0;i<26;i++)
        {
        size_t found=str.find_first_of(alpha[i]);
        if(found!=string::npos)
            continue;
        else
            found=str.find_first_of(toupper(alpha[i]));
        
        if(found!=string::npos)
                continue;
        else
            {
            flag=false;
            break;
        }
    }
    if(flag==true)
        cout<<"pangram";
    else
        cout<<"not pangram";
    return 0;
}

