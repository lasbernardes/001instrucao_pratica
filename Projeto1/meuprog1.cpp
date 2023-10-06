#include <iostream>
#include <string>

using namespace std;

int main(){
    char userName[20];

    cout<<"Insira nome do usuário: ";
    cin.getline(userName,20);

    cout<<"Bom dia "<<userName<<endl;
    return 0;


}
