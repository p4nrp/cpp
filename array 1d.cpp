
#include <iostream>

using namespace std;

int main()
{
    char kode [10]={'A','B','C','D','E','F'};
    int i;
    for (i=0;i<6;i++){
        cout << "HURUF-" << i+1 << " = " << kode[i] << endl;
    }
    return 0;
}


-----OUTPUT--------
    
    HURUF-1= A
    HURUF-2= B
    HURUF-3= C
    HURUF-4= D
    HURUF-5= E
    HURUF-6= F
