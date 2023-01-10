#include <iostream>
using namespace std;


struct bio{
int pil, type, tiket, h, jam, tp, tm;
int hrg[3];
string nama, st, nk, ta;
char pop, min;
};


int total(int a,int b,int c){
long hargatotal;
hargatotal=a+b+c;
return hargatotal;}


void menu(){
bio bioskop;
system ("cls");
cout<<"Selamat datang di Food Delivery" <<endl;
cout<<"#====================================#" <<endl;
cout<<"|1. Krampus : The Devil Returns |" <<endl;
cout<<"|2. The Children |" <<endl;
cout<<"|3. Last christmas 2 |" <<endl;
cout<<"|4. Home Alone 5 |" <<endl;
cout<<"|5. A Christmas Horror Story |" <<endl;
cout<<"#====================================#" <<endl;
cout<<"Masukkan Nama Anda : "; getline(cin,bioskop.nama);
cout<<"Masukan Alamat Anda : "; getline(cin,)----------------------
cout<<"Masukkan Pilihan Pesanan Anda (1-5): "; cin>>bioskop.pil;
cout<<"------------------------------------" <<endl;


cout<<"Type Studio : " <<endl;
cout<<"1. Suite (100.000)" <<endl;
cout<<"2. Biasa (50.000)" <<endl;
cout<<"Masukkan Pilihan Type Studio Anda: "; cin>>bioskop.type;


switch (bioskop.type){
case 1: bioskop.st = "Suite"; break;
case 2: bioskop.st = "Biasa"; break;
default : bioskop.st = "Salah Input"; 
}

cout<<"Jumlah Tiket yang ingin dibeli: "; cin>>bioskop.tiket;


switch (bioskop.pil){
case 1: bioskop.nk = "Krampus : The Devil Returns"; break;
case 2: bioskop.nk = "The Children"; break;
case 3: bioskop.nk = "Last christmas 2"; break;
case 4: bioskop.nk = "Home Alone 5"; break;
case 5: bioskop.nk = "A Christmas Horror Story"; break;
default : bioskop.nk = "Salah Input"; 
}


if (bioskop.type == 1){
bioskop.h=100000;
} else if (bioskop.type == 2){
bioskop.h=50000;
} else {
bioskop.h=0;
}


system ("cls");


cout<<"#=========================#" <<endl;
cout<<"|Jam Tayang : |" <<endl; 
cout<<"|1. 10.30 - 12.30 |" <<endl; 
cout<<"|2. 12.45 - 14.45 |" <<endl;
cout<<"|3. 15.00 - 17.00 |" <<endl;
cout<<"|4. 17.15 - 19.15 |" <<endl;
cout<<"|5. 19.30 - 21.30 |" <<endl;
cout<<"#=========================#" <<endl;
cout<<"Masukkan Pilihan Jam Tayang Anda (1-5): "; cin>>bioskop.jam;


switch (bioskop.jam){
case 1: bioskop.ta = "10.30 - 12.30"; break;
case 2: bioskop.ta = "12.45 - 14.45"; break;
case 3: bioskop.ta = "15.00 - 17.00"; break;
case 4: bioskop.ta = "17.15 - 19.15"; break;
case 5: bioskop.ta = "19.30 - 21.30"; break;
default : bioskop.ta = "Salah Input"; 
}


cout<<"------------------------------------" <<endl;
cout<<"Dengan Popcorn (y/t): "; cin>>bioskop.pop;


if (bioskop.pop == 'y'){
cout<<"Total Popcorn yang ingin dibeli/35rb: "; cin>>bioskop.tp;
} else {
bioskop.tp=0;
}
cout<<"Dengan Minuman (y/t): "; cin>>bioskop.min;
if (bioskop.min == 'y'){
cout<<"Total Minuman yang ingin dibeli/20rb: "; cin>>bioskop.tm;
} else {
bioskop.tm=0;
}


system ("cls");
cout<<"-----------------------------------------------------------" <<endl;
cout<<"Terima Kasih " << bioskop.nama << " telah memilih menonton di studio ini"<<endl;
cout<<"Nama Movie yang akan ditonton: " << bioskop.nk << " dengan total " <<
bioskop.tiket << " tiket "<< bioskop.st <<endl;
cout<<"Jam Tayang Movie: " << bioskop.ta <<endl;
bioskop.hrg [0]= bioskop.h * bioskop.tiket;
bioskop.hrg [1]= bioskop.tp * 35000;
bioskop.hrg [2]= bioskop.tm * 20000;
cout<<"Total Biaya Keseluruhan: " << total(bioskop.hrg[0],bioskop.hrg[1],bioskop.hrg[2]) 
<< endl;
cout<<"-----------------------------------------------------------" <<endl;
}


int main(){
bio bioskop;
char tanya;
atas:
menu();
cout<<"Apakah Anda Ingin Memesan Tiket Lagi (y/t)?";cin>>tanya;
if(tanya=='y'){
goto atas;
}
else {
cout<<"TERIMA KASIH DAN SILAHKAN DATANG KEMBALI"<<endl;
cout<<"Thank You and Enjoy Your Movies" <<endl;
cout<<"MERRY CHRISTMAS" <<endl; 
}
}

