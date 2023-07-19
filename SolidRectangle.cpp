#include <iostream>
using namespace std;
int main()
{
    int rowNumber, colNumber;

    cout<<"Enter Your Number:";

    cin >> rowNumber >> colNumber;

    for (int row = 0; row < rowNumber; row = row + 1)
    {
        for (int col = 0; col < colNumber; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
}