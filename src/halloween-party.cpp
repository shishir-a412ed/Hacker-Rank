//Hacker Rank Problems.
//Solution to Halloween party problem.

//To run the program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/halloween-party

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <utility>

using namespace std;

long findMax(vector<long> c)
    {
    long max=0;
    vector<long>::iterator it=c.begin();
    max=*it;
    it++;
    for(it;it!=c.end();it++)
        {
        if(*it>max)
             max=*it;
    }
    return max;
}

int main() {
    vector<long> cuts;
    unordered_map<long,long> cuts_map;
    int T;
    cin>>T;
    long K;
    int i=0;
    for(i=0;i<T;i++)
        {
        cin>>K;
        cuts.push_back(K);
    }
    
    long max=findMax(cuts);
    long k=2,n=1;
    int count=1;
    pair<long,long> myPair(k,n);
    cuts_map.insert(myPair);
    for(k=3;k<=max;k++)
        {
        if(k%2!=0)
            {
            n=n+count;
            count++;
            myPair=make_pair(k,n);
            cuts_map.insert(myPair);
        }
        else
            {
            n=n+count;
            myPair=make_pair(k,n);
            cuts_map.insert(myPair);
        }
    }
    
    vector<long>::iterator it=cuts.begin();
    for(it;it!=cuts.end();it++)
        {
        k=*it;
        unordered_map<long,long>::iterator map_it=cuts_map.find(k);
        if(map_it!=cuts_map.end())
                cout<<map_it->second<<endl;           
    }
    return 0;
}

