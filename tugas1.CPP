#include <iostream.h>
#include <conio.h>

void main()
{
	int kodePelanggan, jenisKendaraan, hariSewa, biayaSewa;
   char namaPelanggan[50];

   cout << "Masukkan kode pelanggan: "; cin >> kodePelanggan;

   cout << "Masukkan nama pelanggan: "; cin >> namaPelanggan;

   cout << "1 = Mobil : 50000 \n2 = Motor : 25000" << endl;
   cout << "Pilih jenis kendaraan: "; cin >> jenisKendaraan;

   cout << "Masukkan jumlah hari sewa: "; cin >> hariSewa;
   cout << endl;

	cout << "Lama kendaraan yang disewa: " << hariSewa << " hari" << endl;

   if(jenisKendaraan == 1){
		biayaSewa = hariSewa * 50000;
   }
   else{
      biayaSewa = hariSewa * 25000;
   }

   cout << "Biaya yang harus disewa: " << biayaSewa;

   getch();
}