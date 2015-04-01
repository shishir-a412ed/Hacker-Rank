//Hacker Rank Problems.
//Solution to Love letter mystery problem.

//To run the program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/the-love-letter-mystery

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

int main() {
    int T,len,low,mid,high;
    int count;
    int i,j,k;
    cin>>T;
    string str;
    for(k=0;k<T;k++)
        {
        cin>>str;
        char *c_str_word=new char[str.length()+1];
        strcpy(c_str_word,str.c_str());
        len=strlen(c_str_word);
        low=0;
        high=len-1;
        count=0;
        if(len%2!=0)
            {
            mid=(low+high)/2;
            i=mid-1;
            j=mid+1;
            while(i>=0 && j<=high)
                {
                if(c_str_word[i]==c_str_word[j])
                        {
                    i--;
                    j++;
                }
                else if(c_str_word[i]>c_str_word[j])
                    {
                    char ch=c_str_word[i];
                    ch--;
                    c_str_word[i]=ch;
                    count++;
                }
                else if(c_str_word[i]<c_str_word[j])
                    {
                    char ch=c_str_word[j];
                    ch--;
                    c_str_word[j]=ch;
                    count++;
                }                
                }
            }
        else if(len%2==0)
            {
            mid=(low+high)/2;
            i=mid;
            j=mid+1;
            while(i>=0 && j<=high)
                {
                if(c_str_word[i]==c_str_word[j])
                        {
                    i--;
                    j++;
                }
                else if(c_str_word[i]>c_str_word[j])
                    {
                    char ch=c_str_word[i];
                    ch--;
                    c_str_word[i]=ch;
                    count++;
                }
                else if(c_str_word[i]<c_str_word[j])
                    {
                    char ch=c_str_word[j];
                    ch--;
                    c_str_word[j]=ch;
                    count++;
                }                
                }          
        }
        cout<<count<<endl;
        }
    return 0;
}

