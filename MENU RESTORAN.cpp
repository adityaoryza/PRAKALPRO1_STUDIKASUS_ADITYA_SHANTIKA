/* Nama : Shantika Adila Putri - 2100018386*/
/* Nama : Aditya Oryza Mahendra - 2100018401*/

#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;
#define ppn 0.10
const int diskon = 0.10;

int main()
{
	char nama[50], menu[20], back;
	int jumlah, makanan, makan, total, bayar, kurang, bonus, pajak, kembalian, d, harga[2] = {17000, 21000}, i = 0;
	bool saldo;

	do
	{
		system("CLS");
		cout << endl;
		cout << "========STUDI KASUS PRAK ALGORITMA 1===================" << endl;
		cout << " 1. Aditya Oryza Mahendra (2100018401) " << endl;
		cout << " 2. Shantika Adila Putri  (2100018386)" << endl;	
		cout << "\n====================RESTORAN AYAM======================" << endl;
		cout << "Masukkan Nama Anda : ";
		cin >> nama;
		cout << "\n\nPilihan menu yang tersedia" << endl;
		cout << "------------------------------------------------------------------------" << endl;
		cout << "|        [1] Ayam Goreng    = Rp 17.000                                |" << endl;
		cout << "|        [2] Ayam Bakar     = Rp 21.000                                |" << endl;
		cout << "|-----------------------------------------------------------------------" << endl;

		cout << "            (Masukkan Menu Makanan Berdasarkan Nomor)" << endl;
		cout << " Silahkan Pilih Menu diatas\t: ";
		cin >> makanan;

		// Percabangan
		switch (makanan)
		{
		case 1:
			strcpy(menu, "Ayam Goreng ");
			break;
		case 2:
			strcpy(menu, "Ayam Bakar ");
			i = 1;
			break;
		default:
			cout << "Pilihan menu yang anda pilih tidak tersedia..." << endl;
			goto ulang;
		}

		cout << "\t-Anda memilih menu " << menu << endl;
		cout << endl;
		cout << "Jumlah makanan yang dibeli\t: ";
		cin >> jumlah;

		makan = jumlah * harga[i];
		pajak = makan * ppn;
		total = pajak + makan;
		cout << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "|                         RINCIAN DETAIL PESANAN                           |" << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "\tNama Pemesan                        : " << nama << endl;
		cout << "\tMenu Pesanan                        : " << menu << endl;
		cout << "\tJumlah Pesanan                      : " << jumlah << " porsi " << endl;
		cout << "\tHarga Pesanan                       : " << harga[i] << " * " << jumlah << endl;
		cout << "\tPajak Restaurant                    : " << pajak << endl;
		cout << "\tTotal Pembayaran                    : Rp " << total << endl;

		if (total >= 45000)
		{
			d = total * 0.1;
			cout << endl;
			cout << "# Anda mendapatkan diskon Potongan Harga : Rp " << d << " #" << endl;
			cout << "Total Pembayaran Setelah diskon  : Rp " << total - d << endl;
		}

		cout << "--------------------------------------------" << endl;
		cout << "Silahkan bayar disini         : Rp.";
		cin >> bayar;
		// Perulangan
		while (saldo = bayar < (total - d))
		{
			cout << "Saldo anda kurang, Silahkan bayar lagi : Rp. ";
			cin >> kurang;
			bayar += kurang;
		};

		kembalian = bayar - (total - d);
		cout << "Uang yang anda bayar \t\t\t Rp. " << bayar << endl;
		cout << "Uang kembalian \t\t\t\t Rp. " << kembalian << endl;
		cout << "##################################################" << endl;

	ulang:
		cout << "             [Y = ya / T = tidak]" << endl;
		cout << "         Apakah anda ingin memesan lagi ? [Y/T] = ";
		cin >> back;
	} while (back == 'Y' || back == 'y');
	cout << endl;
	cout << "       Terima kasih telah Memesan Makanan disini" << endl;
	cout << "           	Selamat Menikmati" << endl;

	return 0;
}
