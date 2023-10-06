#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float A=5.0f;
    float B=3.0f;

    cout<<"Soma = "<<fixed<<setprecision(1)<<A+B<<endl;
    cout<<"Subtração = "<<fixed<<setprecision(1)<<A-B<<endl;
    cout<<"Multiplicação = "<<fixed<<setprecision(1)<<A*B<<endl;
    cout<<"Divisão = "<<setprecision(1)<<A/B<<endl<<endl;
    return 0;
}