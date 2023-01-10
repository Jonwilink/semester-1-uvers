#include <iostream>
using namespace std;

struct bio{
    int pilihan, porsi, jumlahpesanan, harga, totalextrasaos, dengantelor, denganalatmakan, dadar, alat;
    int hrg[3];
    string nama, alamat, namamenu, ukuran;
    char telordadar, alatmakan;
};

int total(int a,int b,int c){
    long hargatotal;
    hargatotal=a+b+c;
    return hargatotal;
}

void menu(){
	bio fd;

	system ("cls");
	cout<<"======================================"<<endl;
	cout<<"[Selamat Datang di Serba 15K]"<<endl;
	cout<<"Masukan nama anda : ";getline(cin,fd.nama);
	cout<<"======================================"<<endl;
	cout<<"Masukan alamat anda : ";getline(cin,fd.alamat);
	
	cout<<"======================================"<<endl;
	cout<<"1.)Nasi Goreng"<<endl;
	cout<<"2.)Mie Goreng"<<endl;
	cout<<"3.)Kwetiau Goreng"<<endl;
	cout<<"4.)Bihun Goreng"<<endl;
	cout<<"5.)Ifu Goreng"<<endl;
	cout<<"======================================"<<endl;
	cout<<"Jenis Porsi : " <<endl;
    cout<<"1. Biasa (15.000)" <<endl;
    cout<<"2. Jumbo (20.000)" <<endl;
    cout<<"======================================"<<endl;
    
	cout<<"Hallo "<<fd.nama<<", pilih pesanan yang anda inginkan (1-5) ";cin>>fd.pilihan;
	cout<<"Masukkan Jenis Porsi Anda: "; cin>>fd.porsi;
	
	switch (fd.porsi){
        case 1: fd.ukuran = "Biasa"; break;
        case 2: fd.ukuran = "Jumbo"; break;
        default : fd.ukuran = "Maaf Belum Tersedia";
    }

	cout<<"Jumlah pesanan yang ingin dipesan: "; cin>>fd.jumlahpesanan;

	switch (fd.pilihan){
		case 1 : fd.namamenu = "Nasi Goreng";break;
		case 2 : fd.namamenu = "Mie Goreng";break;
		case 3 : fd.namamenu = "Sandwich";break;
		case 4 : fd.namamenu = "Burger";break;
		case 5 : fd.namamenu = "Ayam Goreng";break;
		default : fd.namamenu = "Menu Tidak Tersedia";break;
	}
	
	if (fd.porsi == 1){
		fd.harga = 15000;
	} else if (fd.porsi == 2){
		fd.harga = 20000;
	} else {
		fd.harga = 0;
	}
	
	system("cls");

	cout<<"======================================" <<endl;
    cout<<"Dengan Telor Dadar (y/t): "; cin>>fd.telordadar;
    if (fd.telordadar == 'y'){
        cout<<"Berapa Tambahan Telor Dadar yang anda inginkan (5.000/porsi): "; cin>>fd.dadar;
    } else {
        fd.dengantelor=0;
    }

	cout<<"Dengan Alat Makan (y/t): "; cin>>fd.alatmakan;
    if (fd.alatmakan == 'y'){
        cout<<"Dengan Alat Makan / 1rb 	: "; cin>>fd.alat;
    } else {
        fd.denganalatmakan=0;
    }
	
	system ("cls");
	cout<<"Pesanan anda adalah "<<fd.namamenu<<" sebanyak "<<fd.jumlahpesanan<<" Porsi"<<endl;

	fd.hrg[0] = fd.porsi * fd.harga;
	fd.hrg[1] = fd.dadar * 5000;
	fd.hrg[2] = fd.alat * 1000;

	cout<<"Total harga yang harus dibayar: "<<total(fd.hrg[0], fd.hrg[1], fd.hrg[2])<<endl;
	cout<<"----------------------------------"<<endl;
}

int main(){

	bio fd;
	char tanya;
	ulang:
	menu();
	cout<<"Apakah Anda Ingin Memesan Makanan Lagi (y/t)? ";cin>>tanya;
	if(tanya=='y'){
	goto ulang;
	}
	else {
	cout<<"Terima kasih "<<fd.nama<<" Telah menggunakan aplikasi kami, "<<endl;
	cout<<"Mohon tunggu, sebentar lagi pesanan Anda akan di antarkan ke "<<fd.alamat<<"."<<endl;
	cout<<"Mohon siapkan uang tunai sebesar "<<total(fd.hrg[0], fd.hrg[1], fd.hrg[2])<<endl;
	
}
}
