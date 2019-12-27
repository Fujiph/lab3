#include <iostream>
using namespace std;

int main()
{
    float  sum,n = 5;
    while (n<=19){
        n = n+1;
        sum = sum + 1/n;
    }
    cout << sum ;
    return 0;
}