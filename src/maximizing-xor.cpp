//Hacker Rank Problems.
//Solution to Maximizing XOR problem.

//To run the program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/maximizing-xor


#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/*
 *  * Complete the function below.
 *   */
int maxXor(int l, int r) {
    
    vector<int> xor_list;
    int i=0,j=0;
    for(i=l;i<=r;i++)
        {
        for(j=i;j<=r;j++)
            {
            xor_list.push_back(i^j);
        }
    }
    vector<int>::iterator it=xor_list.begin();
    int max=0;
    for(it;it!=xor_list.end();it++)
        {
        if(*it>max)
            max=*it;
    }
    return max;

}

int main() {
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    res = maxXor(_l, _r);
    cout << res;
    
    return 0;
}

