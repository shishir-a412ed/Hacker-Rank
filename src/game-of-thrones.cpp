//Hacker Rank Problems.
//Solution to Game of thrones-I problem.

//To run the program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/game-of-thrones

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <utility>
#include <string.h>
using namespace std;


int main() {
   
    string s;
    cin>>s;
    unordered_map<char,int> char_count;
    unordered_map<char,int>::iterator it;
    pair<char,int> myPair;
    bool flag=true,firstTime=true;
    char *str=new char[s.length()+1];
    strcpy(str,s.c_str());
    int i=0,count=0;
    int len=strlen(str);
        for(i=0;i<len;i++)
            {
            it=char_count.find(str[i]);
            if(it!=char_count.end())
                {
                count=it->second;
                count++;
                myPair=make_pair(str[i],count);
                char_count.erase(it);
                char_count.insert(myPair);              
            }
            else
                {
                count=1;
                myPair=make_pair(str[i],count);
                char_count.insert(myPair);
            }
        }
    
    if(len%2==0)
        {
        it=char_count.begin();
        for(it;it!=char_count.end();it++)
            {
            count=it->second;
            if((count%2)!=0)
                {
                flag=false;
                break;
            }
        }
    }
    else
        {
        it=char_count.begin();
        for(it;it!=char_count.end();it++)
            {
            count=it->second;
            if(count%2==0)
                continue;
            else if(count==1 || count%2!=0)
                {
                if(firstTime)
                    {
                    firstTime=false;
                    continue;
                }
                else
                    {
                    flag=false;
                    break;
                }
            }
        }
           
    }

    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string 
         if(!flag)
            cout<<"NO";
         else
            cout<<"YES";
    return 0;
}

