//Hacker Rank Problems.
//Solution to ACM ICPC Team problem.

//To run the program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/acm-icpc-team

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

int main() {
   int N,M;
    int max_topics=1,max_teams=1;
    int noOfTopics=0;
    cin>>N>>M;
    vector<string> topics;
    string str;
    int i=0,j=0;
    for(i=0;i<N;i++)
        {
        cin>>str;
        topics.push_back(str);
        str.clear();
    }
    vector<string>::iterator outer,inner;
    outer=topics.begin();
    for(outer;outer!=topics.end();outer++)
        {
        inner=outer;
        inner++;
            
            str=*outer;
            char *c_str_outer=new char[str.length()+1];
            strcpy(c_str_outer,str.c_str());
            str.clear();
        
        for(inner;inner!=topics.end();inner++)
            {            
            str=*inner;
            char *c_str_inner=new char[str.length()+1];
            strcpy(c_str_inner,str.c_str());
            str.clear();
            
            noOfTopics=0;
            
            for(i=0,j=0;i<strlen(c_str_outer),j<strlen(c_str_inner);i++,j++)
                {
                if(c_str_outer[i]=='1'||c_str_inner[j]=='1')
                {
                    noOfTopics++;
                }
            }
            
            if(noOfTopics==max_topics)
                    max_teams++;
            if(noOfTopics>max_topics)
                {
                    max_topics=noOfTopics;
                    max_teams=1;
            }
            delete(c_str_inner);
        }
        delete(c_str_outer);
    }
    cout<<max_topics<<endl;
    cout<<max_teams<<endl;
    return 0;
}

