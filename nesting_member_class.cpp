#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read();
    void chk_bin();
    void ones_compliment();
    void display();
};

void binary ::read()
{
    cout << "Enter binary number : " << endl;
    cin >> s;
}

void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "It`s not binary number" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment()
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout << endl;
}

void binary ::display()
{
    cout << "Display your binary number :" << endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary a;

    a.read();
    a.display();
    // a.chk_bin();
    a.ones_compliment();
    a.display();

    return 0;
}