#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

void insertSort(int *datos, int n){
  int temporal;
  for (int i = 0; i < n; i++)
  {
    temporal = datos[i];
    int predecesor = i;

    while ((predecesor > 0) && datos [predecesor-1] > temporal) {
      datos[predecesor] = datos[predecesor - 1];
      predecesor--;
    }
    datos[predecesor] = temporal;
  } 
}

void imprimirArreglo(int datos[], int n) {
  for (int i = 0; i < n; i++)
  {
    cout << setw(4) << datos[i];
  }
  cout << endl;
}

int main(int argc, char const *argv[])
{
  const int tamanoArreglo = 10;
  int datos [tamanoArreglo] = {34, 56, 4, 10, 77, 51, 44, 3, 1, 90};
  imprimirArreglo(datos, tamanoArreglo);
  insertSort(datos, tamanoArreglo);
  imprimirArreglo(datos, tamanoArreglo);
  return 0;
}
