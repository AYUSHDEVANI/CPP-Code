#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * fact(n - 1);
}

int main()
{
    int num;
    cout << "Enter Numbers For Factorial" << endl;
    cin >> num;
    cout << "The Factorial Of " << num << " is " << fact(num);

    return 0;
}