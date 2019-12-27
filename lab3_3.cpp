#include <iostream>
using namespace std;

int main()
{
    float  sum,n = 2;
    while (n<=69){
        sum = sum + 1/n;
        n = n+1;
    }
    cout << sum ;
    return 0;
}