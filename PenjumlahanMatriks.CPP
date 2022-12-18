#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

void main()
{
	char matrixName[2];
	int elements1[2][2], elements2[2][2], result[2][2];
	clrscr();
   cout << "* Program Penjumlahan matriks ordo 2x2 *" << endl;
   cout << "==================================" << endl;

   for(int i = 0; i < 2; i++){
   	cout << "Input Matrix Name: ";
   	cin >> matrixName[i];
   }

   cout << endl;

   for(int row = 0; row < 2; row++){
   	for(int col = 0; col < 2; col++){
			cout << "Input Elements " << matrixName[0] << row + 1 << col + 1 << ": ";
         cin >> elements1[row][col];
      }
   }

   cout << endl;

   for(int row = 0; row < 2; row++){
   	for(int col = 0; col < 2; col++){
			cout << "Input Elements " << matrixName[1] << row + 1 << col + 1 << ": ";
         cin >> elements2[row][col];
      }
   }

   // proses penjumlahan
   for(int row = 0; row < 2; row++){
   	for(int col = 0; col < 2; col++){
          result[row][col] = elements1[row][col] + elements2[row][col];
      }
   }

   cout << endl;

	// output
   cout << matrixName[0] << " + " << matrixName[1] << " = " << endl;
   cout << " -" << setw(13) << "-" << endl;
   for(int row = 0; row < 2; row++){
   	cout << "|" << setw(5);
   	for(int col = 0; col < 2; col++){
			cout << result[row][col] << setw(5);
      }
		cout << "|" <<endl;
   }
   cout << " -" << setw(13) << "-" << endl;

   getch();
}
