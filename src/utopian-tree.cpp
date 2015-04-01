//Hacker Rank Problems.
//Solution to Utopian Tree problem.

//To run the program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/utopian-tree

#include <iostream>
using namespace std;

int height(int n) {
    int sum=1;
    int i=0;
    for(i=0;i<n;i++)
        {
        if(i%2==0)
            sum=sum*2;
        else
            sum=sum+1;
    }
    return sum;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}

