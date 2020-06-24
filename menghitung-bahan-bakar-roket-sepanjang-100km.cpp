#include<iostream>

using namespace std;

int main(){
    float km1 = 10, km2 = 8, kmn;

    for(km1; km1 <= 100; km1++){
        kmn = km1 * 0.8;
        cout<<kmn<<" Kg"<<endl;
    }
    
    cout<<"\n\nJadi, total bahan bakar yang digunakan adalah "<<kmn<<" Kg";
    
    return 0;
}
