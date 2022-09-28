#include <iostream>
using namespace std;
//exemplo de media e notas de alunos

int main(void)
{
  cin >> N1;
  cin >> N2;
  cin >> N3;
  cin >> N4;
  MD1 = (N1 + N2 + N3 + N4) / 2;
     if (MD1 >= 7)
        cout << "Aprovado: " << MD1 << endl;
     else
     {
         cin << EX;
         MD2 = (EX + MD1) / 2;
         if (MD2 >= 5)
             cout << "Aprovado em exame: ";
         else
             cout << "Reprovado: ";
          cout << MD2 << endl;
     }
}
