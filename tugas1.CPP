#include <iostream.h>
#include <conio.h>

void main()
{
	int kodePelanggan, jenisKendaraan, hariSewa, biayaSewa;
   char namaPelanggan[50];

   cout << "Masukkan kode pelanggan: "; cin >> kodePelanggan;
   cout << "Kode Pelanggan: " << kodePelanggan << endl;
   cout << endl;

   cout << "Masukkan nama pelanggan: "; cin >> namaPelanggan;
   cout << "Nama pelaggan: " << namaPelanggan << endl;
   cout << endl;

   cout << "1 = Mobil : 50000 \n2 = Motor : 25000" << endl;
   cout << "Pilih jenis kendaraan: "; cin >> jenisKendaraan;
   switch(jenisKendaraan){
   	case 1:
      	cout << "Jenis Kendaraan yang dipilih adalah MOBIL" << endl;
      	break;
      case 2:
      	cout << "Jenis Kendaraan yang dipilih adalah MOTOR" << endl;
      	break;
      default:
      	cout << "Silahkan pilih jenis kendaraan!!!" << endl;
   }
   cout << endl;

   cout << "Masukkan jumlah hari sewa: "; cin >> hariSewa;
   cout << endl;

	cout << "Jumlah hari sewa: " << hariSewa << " hari" << endl;

   if(jenisKendaraan == 1){
		biayaSewa = hariSewa * 50000;
   }
   else if(jenisKendaraan == 2){
      biayaSewa = hariSewa * 25000;
   }
   else{
		cout << "Silahkan pilih jenis kendaraan!!!";
   }

   cout << "Biaya sewa kendaraan: " << biayaSewa;

   getch();
}