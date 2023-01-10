#include <iostream>
using namespace std;

struct pesan{
    int pilihan, porsi, jumlahpesanan, harga, dengantelor, denganalatmakan;
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
	pesan fd;

	system ("cls");
	cout<<"======================================"<<endl;
	cout<<"Selamat Datang di Serba 15K"<<endl;
	
	pilihulangmenu:
	system ("cls");
	cout<<"======================================"<<endl;
	cout<<"1) Nasi Goreng"<<endl;
	cout<<"2) Mie Goreng"<<endl;
	cout<<"3) Kwetiau Goreng"<<endl;
	cout<<"4) Bihun Goreng"<<endl;
	cout<<"5) Ifumie Goreng"<<endl;
	cout<<"======================================"<<endl;
	cout<<"Hai, Silahkan Pilih Menu yang Anda Inginkan (1-5) : ";cin>>fd.pilihan;
	cout<<endl;	
	
	if (fd.pilihan == 1){
		fd.namamenu = "Nasi Goreng";
	} else if (fd.pilihan == 2){
		fd.namamenu = "Mie Goreng";
	} else if (fd.pilihan == 3){
		fd.namamenu = "Kwetiau Goreng";
	} else if (fd.pilihan == 4){
		fd.namamenu = "Bihun Goreng";
	} else if (fd.pilihan == 5){
		fd.namamenu = "Ifumie Goreng";
	} else {
		goto pilihulangmenu;
	}

	cout<<"Jumlah Pesanan yang Ingin Dipesan : "; cin>>fd.jumlahpesanan;

    pilihulangporsi:
	system ("cls");
	cout<<"Jenis Porsi : " <<endl;
    cout<<"1) Biasa (15.000)" <<endl;
    cout<<"2) Jumbo (20.000)" <<endl;
    cout<<"Masukkan Jenis Porsi yang Anda Inginkan : "; cin>>fd.porsi;
    cout<<endl;
    
    switch (fd.porsi){
        case 1: fd.ukuran = "Biasa"; break;
        case 2: fd.ukuran = "Jumbo"; break;
        default : goto pilihulangporsi;
    }
	
	if (fd.porsi == 1){
		fd.harga = 15000;
	} else if (fd.porsi == 2){
		fd.harga = 20000;
	} else {
		fd.harga = 0;
	}

	cout<<"--------------------------------------" <<endl;
    cout<<"Dengan Tambahan Telor Dadar/5rb (y/t) : "; cin>>fd.telordadar;
    if (fd.telordadar == 'y' || fd.telordadar == 'Y'){
        cout<<"Jumlah Telor Dadar yang Dinginkan : "; cin>>fd.dengantelor;
    } else if (fd.telordadar == 't' || fd.telordadar == 'T') {
        fd.dengantelor=0;
    } cout<<endl;
    
    cout<<"--------------------------------------" <<endl;
	cout<<"Dengan Tambahan Alat Makan/1rb (y/t) : "; cin>>fd.alatmakan;
    if (fd.alatmakan == 'y'){
        cout<<"Jumlah Alat Makan yang Dinginkan : "; cin>>fd.denganalatmakan;
    } else {
        fd.denganalatmakan=0;
    }
	
	system ("cls");
	cout<<"Pesanan Anda adalah "<<fd.namamenu<<" dengan Ukuran "<<fd.ukuran<<" Sebanyak "<<fd.jumlahpesanan<<" Porsi "<<endl;
	cout<<"Pesanan Anda akan Sampai ke Alamat Anda Dalam Waktu Beberapa Menit"<<endl;

	fd.hrg[0] = fd.jumlahpesanan * fd.harga;
	fd.hrg[1] = fd.dengantelor * 5000;
	fd.hrg[2] = fd.denganalatmakan * 1000;

	cout<<"Total Harga yang Harus Dibayar : Rp "<<total(fd.hrg[0], fd.hrg[1], fd.hrg[2])<<endl;
	cout<<"--------------------------------------"<<endl;
}

int main(){
	int harga1, harga2, harga3;
	string nama, alamat;
	
	cout<<"Masukkan Nama Anda : ";getline(cin,nama);
	cout<<"Masukkan Alamat Anda : ";getline(cin,alamat);

	pesan fd;
	
	char tanya;
	
	pesanlagi:
	menu();
	cout<<"Apakah Anda Ingin Memesan Makanan Lagi (y/t)? ";cin>>tanya;
	if (tanya == 'y' || tanya == 'Y'){
		goto pesanlagi;
	} 
	else {
	cout<<"Terima Kasih "<<nama<<" Telah Menggunakan Aplikasi Serba 15K, "<<endl;
	cout<<"Mohon Tunggu, Sebentar Lagi Pesanan Anda akan Diantarkan ke Alamat Anda di "<<alamat<<endl;
	cout<<"Mohon Siapkan Uang Tunai Sesuai dengan Total Harga yang Harus Dibayar"<<endl;
	}
}
