#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

void main()
{
	char namaMatriks;
   int elementElement[3][3];
	clrscr();
	cout << "***************************" << endl;
   cout << "* Menampilkan Matriks 3x3 *" << endl;
   cout << "***************************" << endl;

   cout << "Input Nama Matriks: ";
   cin >> namaMatriks;

   cout << endl;

   for(int baris = 0; baris < 3; baris++){
		for(int kolom = 0; kolom < 3; kolom++){
         cout << "Input Element " << namaMatriks << baris + 1 << kolom + 1 << ": ";
      	cin >> elementElement[baris][kolom];
      }
      cout << endl;
   }

   cout << endl;

   // menampikan matriks
   cout << "Matriks " << namaMatriks << ": " << endl;
   cout << " -" << setw(18) << "-" << endl;
   for(int baris = 0; baris < 3; baris++){
   	cout << "|" << setw(5);
   	for(int kolom = 0; kolom < 3; kolom++){
			cout << elementElement[baris][kolom] << setw(5);
      }
      cout << "|" << endl;
   }
   cout << " -" << setw(18) << "-" << endl;

   getch();
}