#include <iostream.h>
#include <conio.h>
int persegi(int);

int main()
{
	int number, result,hasil;
   cout << "masukkan angka yang akan diakarkan : ";
   cin >> number;
   hasil = persegi (number);
   cout << number << " hasilnya adalah " << hasil << endl;
   getch();
   return 0 ;
}

int persegi (int number)
{
return number * number;
}
