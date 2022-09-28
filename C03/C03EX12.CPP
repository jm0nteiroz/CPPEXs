// C03EX12.CPP

#include <iostream>
using namespace std;

int main(void)
{
  int MES;

  cout << "Entre um numero equivalente a um MES: ";
  cin >> MES;
  cin.ignore(80, '\n');

  cout << endl;

  switch (MES)
  {
    case 2:
    case 4:
    case 6:
    case 8: cout << "Par";          break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 9: cout << "Impar";        break;
  }

  cout << endl << endl;

  cout << "Aprete <Enter> para encerrar... ";
  cin.get();
  return 0;

}


