#include <iostream>
using namespace std;
int opc=3;
int Edad=0;
char Sexo;
char Numero[10];
char Nombre[50];
char paterno[30];
char materno[30];
int main(){
    cout<<"Ingresa tu Nombre: ";
	cin.getline(Nombre,50,'\n');
	system("cls");

	cout<<"Ingresa tu apellido paterno: ";
	cin>>paterno;
	system("cls");

	cout<<"Ingresa tu apellido materno: ";
	cin>>materno;
//.........................................................................................
/*
    while (opc >= 3) {
        system("cls");
        cout<<"Sexo:\n";
        cout<<"  1-Masculino	\n";
        cout<<"  2-Femenino	\n";
        cout<<"Opcion:  ";
        cin>>opc;
    }
    switch(opc)
	{
	    case 1: Sexo='M';break; 
				
	    case 2: Sexo='F';break;
	}
    */
  //.........................................................................................
  // Esta parte se usa para no igualar "opc" a 0
  //actua y luego piensa
     do
{
       system("cls");
        cout<<"Sexo:\n";
        cout<<"  1-Masculino	\n";
        cout<<"  2-Femenino	\n";
        cout<<"Opcion:  ";
        cin>>opc;
}
while(opc >= 3);
switch(opc)
	{
	    case 1: Sexo='M';break; // Sexo="M"
                                            //solo si no declaro "sexo" 
	    case 2: Sexo='F';break; //Sexo="F"
	}
//.........................................................................................
    system("cls");
    cout<<"Ingresa tu numero celular: ";
    cin>>Numero;
    system("cls");

	cout<<"Ingresa tu Edad: ";
    cin>>Edad;
    
//.........................................................................................
    system("cls"); 
	cout<<"Nombre: "<<Nombre;
    
    cout<<"\nApellido paterno: "<<paterno;
    
    cout<<"\nApellido materno: "<<materno;
    
    cout<<"\nSexo: "<<Sexo;
  
    cout<<"\nEdad: "<<Edad;   
   
    cout<<"\nNumero: "<<Numero;
    

    
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
