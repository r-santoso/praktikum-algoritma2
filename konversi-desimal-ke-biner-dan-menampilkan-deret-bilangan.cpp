#include <iostream>

using namespace std;

void nomorSatu(){
    int a[255], n, i;
    
    cout<<"NOMOR 1\n";
    cout<<"Masukkan bilangan desimal \t: ";
    cin>>n;
    
    for(i = 0; n > 0; i++){
        a[i] = n % 2;
        n = n / 2;
    }
    
    cout<<"Hasil konversi \t\t\t: ";
    for(i = i - 1; i >= 0; i--){
        cout<<a[i];
    }
    
    cout<<endl;
}

void nomorDua(){
    int l, p =1;
    cout<<"NOMOR 2\n";
    
    for(l = 1; l <= 512; l++){
        cout<<p<<" ";
        p += p;
        l = p - 1;
    }
}

int main(){
    nomorSatu();
    
    cout<<"-------------------------------------"<<endl;
    
    nomorDua();
    
    return 0;
}
