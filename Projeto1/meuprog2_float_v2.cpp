#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float A=5.0;
    float B=3.0;

    cout<<fixed<<setprecision(1)<<"Soma = "<<A+B<<endl;
    cout<<fixed<<setprecision(1)<<"Subtração = "<<A-B<<endl;
    cout<<fixed<<setprecision(1)<<"Multiplicação = "<<A*B<<endl;
    cout<<fixed<<setprecision(1)<<"Divisão = "<<A/B<<endl;
    //cout<<"Resto = "<<A%B<<endl;
    return 0;
}
