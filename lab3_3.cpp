#include <iostream>
using namespace std;

int main()
{
    float  sum,n = 6;
    while (n<=19){
        sum = sum + 1/n;
        n = n+1;
    }
    cout << sum ;
    return 0;
}