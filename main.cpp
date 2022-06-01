#include <iostream>

using namespace std;

class study7{
  public:
  void input();
  void out1();
  void search();

private:
  int id[10];
  string nama[10];
  string jabatan[10];
  long telp[10];
  int jumlah; 
  int pil;
  int temp;
  int find;

};

void study7::input(){
  cout<<"Masukkan Jumlaha Data Karyawan: ";
  cin>>jumlah;

  for(int i=0;i<jumlah;i++){
    cout<<"Data Karyawan ke- "<<i+1<<endl;
    cout<<"Masukkan ID : ";
    cin>>id[i];
    cout<<"Masukkan Nama : ";
    cin>>nama[i];
    cout<<"Masukkan Jabatan: ";
    cin>>jabatan[i];
    cout<<"Masukkan No.HP: ";
    cin>>telp[i];
  }
  cout<<endl;
}

void study7::out1(){
  cout<<"Pilihan Sorting"<<endl;
  cout<<"1.Ascending"<<endl;
  cout<<"2.Descanding"<<endl;
  
  cout<<"Masukkan Pilihan: ";
  cin>>pil;

  if(pil==1){
    for(int i=0;i<jumlah;i++){
      for(int j=0;j<jumlah;j++){
        if(id[j]<id[i]){
          temp=id[i];
          id[i]=id[j];
          id[j]=temp;
        }
      }
    }
    cout<<"\nData Karyawan"<<endl;
    cout<<"ID\t\t  NAMA\t\t  JABATAN\t\t  NO.HP"<<endl;
    for(int i=0;i<jumlah;i++){
      cout<<id[i]<<"\t\t"<<nama[i]<<"\t\t"<<jabatan[i]<<"\t\t"<<telp[i]<<endl;
    }
  }

    
  else if(pil==2){
    for(int i=1; i<=jumlah; i++){
      for(int j=i; j<=jumlah; j++){
        if(id[i] < id[j]){
          temp = id[j];
          id[j] = id[i];
          id[i] = temp;
        }
      }
    }
    cout<<"\nData Karyawan"<<endl;
    cout<<"ID\t\t  NAMA\t\t  JABATAN\t\t  NO.HP"<<endl;
    for(int i=0;i<jumlah;i++){
      cout<<id[i]<<"\t\t"<<nama[i]<<"\t\t"<<jabatan[i]<<"\t\t"<<telp[i]<<endl;
    }
  
  }
}

void study7::search(){
cout << "Masukkan ID yang di cari ?";
  cin >> find;
  y
  for(int i=1; i<jumlah; i++){
    
        if (find==id[i])
       {
        cout<<"ID     : " << id[i] << endl;
        cout<<"Nama   : " << nama[i] << endl;
        cout<<"Jabatan: " << jabatan[i]<< endl;
        cout<<"No.HP  : " << telp[i] << endl;
         
      }
    }
   }
  
        




int main() {
  study7 sk;
  sk.input();
  sk.out1();
  sk.search();
}