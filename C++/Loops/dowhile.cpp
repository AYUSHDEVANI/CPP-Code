#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    do
    {
        cout << i << endl;
        i++;
    } while (i <= 10);

    do
    {
        cout << i << endl;
        i++;
    } while (i < 1);
    

    return 0;
}