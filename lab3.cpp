#include <iostream>
using namespace std;

int main()
{
    float  sum,n = 1;
    while (n<=69){
        n = n+1;
        sum = sum + 1/n;
    }
    cout << sum ;
    return 0;
}