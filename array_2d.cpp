#include <iostream>

using namespace std;

int main()
{
    char kode [3][3]={
        {'A','B','C'},
        {'D','E','F'},
        {'G','H','I'}






        };
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<< kode[i][j]<<" ";
        }
        cout<<"\n"; //new line at each row
    }
    return 0;
}




--------OUTPUT----------

A B C
D E F
G H I
