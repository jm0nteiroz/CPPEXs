#include <iostream>
using namespace std;

int main(void)
{
  float A, B, C;

  cout << "Entre o lado <A>: "; cin >> A;
  cin.ignore(80, '\n');

  cout << "Entre o lado <B>: "; cin >> A;
  cin.ignore(80, '\n');

  cout << "Entre o lado <C>: "; cin >> A;
  cin.ignore(80, '\n');

  if (A<B+C && B<A+C && C<A+B)
     if (A==B && B==C)
        cout << "Triangulo Equilatero.";
     else
       if (A==B || A==C || C==B)
        cout << "Triangulo Isosceles.";
       else
        cout << "Triangulo Escaleno.";
  else
     cout << "Valores fornecidos nao formam triangulo. ";
    cout << endl << endl;

    cout << "Tecle <Enter> para encerrar";
    cin.get();
    return 0;
}
