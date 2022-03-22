#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char Nombre[10];
    char paterno[20];
    char materno[20];
    char Sexo;
    int Numero=0;
    int Edad=0;
    
    cout<<"ingresa tu Nombre	";
	cin.getline(Nombre,10,'\n');
	//gets(Nombre);
	cout<<"ingresa tu apellido paterno	";
	cin>>paterno;
	//cin.getline(p,50,'\n');
	//gets(p);
	cout<<"ingresa tu apellido materno	";
	cin>>materno;
	//cin.getline(m,50,'\n');
	//gets(m);
	cout<<"ingresa tu sexo (m/f)	";
	cin>>Sexo;
	//cin.getline(Sexo,2,'\n');
	//gets(Sexo);
	cout<<"ingresa tu numero celular	";
    cin>>Numero;
	
	cout<<"ingresa tu Edad	";
    cin>>Edad;
    
	cout<<"\n Nombre: "<<Nombre;
    cout<<"\n Apellido paterno:		"<<paterno;
    cout<<"\n Apellido materno:	"<<materno;
    cout<<"\n Edad: "<<Edad;
    cout<<"\n Sexo:	"<<Sexo;
    cout<<"\n Numero: "<<Numero;

	return 0;
}
/*

                           ______
        |\_______________ (_____\\______________
HH======#H###############H#######################
        ' ~""""""""""""""`##(_))#H\"""""Y########
                          ))    \#H\       `"Y###
                          "      }#H)
R34-Payer
*/
