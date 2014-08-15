#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N,I,RESP,R;
    RESP = 1;


   while (RESP == 1)
   {
       cout << "entre o valor da tabuada: "; cin >> N;
       cout << "\n";
       I = 1;
    while ( I <= 10)
    {
        R=N*I;
        cout << setw(2)<< N;
        cout << " X ";
        cout << setw(2) << I;
        cout << " = ";
        cout << setw(3) << R <<endl;
        I = I + 1;
    }
    cout << "\n";
    cout << "deseja continuar?"<<endl;
    cout << "tecle [1] para sim / tecle [2] para nao: ";
    cin >> RESP;
}
    return 0;
}
