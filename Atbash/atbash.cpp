#include <iostream>
#include <string>

using namespace std;

int main(){

    string mensaje;
    int i=0;
    int seguir = 1;

    cout<<"----CIFRADO ATBASH----"<<endl;
        cout<<"Ingresa un mensaje"<<endl;
        getline(cin, mensaje);
        cout<<"Mensaje cifrado: ";

        while(mensaje[i] != '\0'){
            char x= mensaje[i];
            char y;
            if (x>=65 && x<=90){
                y = 65 +(25 - (x-65));
            } else if (x>=97 && x<=122){
                y = 97 +(25 - (x-97));
            } else if (x==' '){
                y= ' ';
            }
            cout<<y;
            i++;
        }

    return 0;
}
