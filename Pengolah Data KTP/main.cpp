#include <iostream>
#include <conio.h>
#include <windows.h>
#include<stdio.h>
using namespace std;

struct daerah
{
       char kel[50];
       char kec[50];
       char rtrw[50];
};

struct data
{
       int nomor;
       char nama[50];
       char tempat[50];
       char jeniskelamin[10];
       char agama[20];
       char status[20];
       char pekerjaan[20];
       char almt[20];
       char kewarganegaraan[20];
       char berlaku[20];
       daerah alamat;
};

main()
{

    int menu;
    int nik=-1,i,j;
    int pilih;
    int namedit;
    data ktp[20];
    char get[1];
    bool ketemu;

    menuutama:
    system("cls");
 cout<<" ------------- Pengolah Data KTP ---------------";
    cout <<" \nMENU :\n\n";
    cout<<" 1.Menambah Data \n\n";
    cout<<" 2.Menampilkan Data \n\n";
    cout<<" ____________________________________________\n\n";
    cout<<" Masukan Pilihan : "; cin>>menu;

    if(menu==1)
 {
  system("cls");
     nik++;
     cout<<"\n PENAMBAHAN DATABASE KTP\n";
     cout<<" __________________________________________________________________\n\n";
     cout<<" NIK                    : "; cin>>ktp[nik].nomor; cin.getline(get,1);
     cout<< endl;
     cout<<" Nama                   : "; cin.getline(ktp[nik].nama,50);
     cout<< endl;
     cout<<" Tempat/Tgl Lahir       : "; cin.getline(ktp[nik].tempat,20);
     cout<< endl;
     cout<<" Jenis Kelamin          : "; cin.getline(ktp[nik].jeniskelamin,20);
     cout<< endl;
     cout<<" Alamat                 : "; cin.getline(ktp[nik].almt,20);
     cout<< endl;
        cout<<" RT/RW                   : "; cin.getline(ktp[nik].alamat.rtrw,20);
        cout<< endl;
        cout<<" Kel/Desa                : "; cin.getline(ktp[nik].alamat.kel,20);
        cout<< endl;
        cout<<" Kecamatan               : "; cin.getline(ktp[nik].alamat.kec,20);
        cout<< endl;
     cout<<" Agama                  : "; cin.getline(ktp[nik].agama,20);
     cout<< endl;
     cout<<" Status Perkawinan      : "; cin.getline(ktp[nik].status,20);
     cout<< endl;
     cout<<" Pekerjaan              : "; cin.getline(ktp[nik].pekerjaan,20);
     cout<< endl;
     cout<<" Kewarganegaraan        : "; cin.getline(ktp[nik].kewarganegaraan,20);
     cout<< endl;
     cout<<" Berlaku Hingga         : "; cin.getline(ktp[nik].berlaku,20);

     cout<<" _________________________________________________________________\n\n";
        cout<<" 1.Kembali ke Menu \n\n";
     cout<<" 2.Keluar \n";
     cout<<" _________________________________________________________________\n\n";
        cout<<" Masukan Pilihan : "; cin>>pilih;
     cout<<endl;
     if(pilih==1)
  {
      goto menuutama;
     }
     else if(pilih==2)
  {
      goto keluar;
     }
    }

 else if(menu==2)
 {
  system ("cls");
  cout<<"\n MENAMPILKAN DATA PENDUDUK (KTP)\n";
  cout<<" ____________________________________________________________________\n\n";
        for(i=0;i<=nik;i++)
  {
    cout<<" __________________________________________________________________\n\n";
    cout<<" Database Data KTP ke-"<<i<<endl<<endl;
    cout<<" NIK : "<<ktp[i].nomor<<endl<<endl;
    cout<<" Nama : "<<ktp[i].nama<<endl<<endl;
    cout<<" Tempat/Tgl Lahir : "<<ktp[i].tempat<<endl<<endl;
    cout<<" Jenis Kelamin : "<<ktp[i].jeniskelamin<<endl<<endl;
    cout<<" Alamat : "<<ktp[i].almt<<endl<<endl;
      cout<<" Kel/Desa : "<<ktp[i].alamat.kel<<endl<<endl;
      cout<<" Kecamatan : "<<ktp[i].alamat.kec<<endl<<endl;
      cout<<" RT/RW : "<<ktp[i].alamat.rtrw<<endl<<endl;
    cout<<" Agama : "<<ktp[i].agama<<endl<<endl;
    cout<<" Status perkawinan : "<<ktp[i].status<<endl<<endl;
    cout<<" Pekerjaan : "<<ktp[i].pekerjaan<<endl<<endl;
    cout<<" Kewarganegaraan : "<<ktp[i].kewarganegaraan<<endl<<endl;
    cout<<" Berlaku Hingga : "<<ktp[i].berlaku<<endl<<endl;
    cout<<" __________________________________________________________________\n\n";
  }
  cout<<" ____________________________________________________________________\n\n";
  cout<<" 1.Kembali ke Menu \n\n";
     cout<<" 2.keluar\n";
     cout<<" _________________________________________________________________\n\n";
        cout<<" Masukan Pilihan : "; cin>>pilih;
        if(pilih==1)
  {
      goto menuutama;
     }
     else if(pilih==2)
  {
      goto keluar;
     }

 keluar:
    system("cls");
    cout<<"\n TERIMA KASIH\n";
    cout<<"\n Dwi Prasetyo | 202111002\n";
    getch();
    return 0;
    }
}
