#include <iostream>
using namespace std;

int fib(int n)
{
    if (n<2)
    {
        return 1;
    }
    
    return fib(n-2) + fib(n-1);
}

int main()
{
    int num;
    cout << "Enter Numbers For Fibonacci" << endl;
    cin >> num;
    cout << "The Fibonacci Of " << num << " is " << fib(num);

    return 0;
}