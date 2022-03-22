#include <iostream>
//#include <conio.h> // uso de getch();
using namespace std;
//variables
int main(){
    int Edad=0;
    int opc;
    char Numero[10];
	char Nombre[50];
    char paterno[30];
    char materno[30];
    char Sexo;

//............................................................
    
    cout<<"Ingresa tu Nombre: ";
	cin.getline(Nombre,50,'\n');
	
	cout<<"Ingresa tu apellido paterno: ";
	cin>>paterno;
	
	cout<<"Ingresa tu apellido materno: ";
	cin>>materno;
	
	//cout<<"Ingresa tu sexo (m/f)	\n";
    cout<<"Sexo:\n";
    cout<<"  1-Masculino	\n";
    cout<<"  2-Femenino	\n";
    cout<<"Opcion:  ";
    cin>>opc;

   if(opc < 3){

       switch(opc)
	    {
	    case 1: Sexo='M';break; 
				
	    case 2: Sexo='F';break;
	    }	
   }
    else{
        cout<<"Error...Seleccione 1-2\n";//<<endl;
		if(opc == 666){
            cout<<"Que diabolico eres :o\n";
        }
        else{
            
        }
    }



	cout<<"Ingresa tu numero celular: ";
    cin>>Numero;
    

	cout<<"Ingresa tu Edad: ";
    cin>>Edad;
 
 //...........................................................
 system("cls"); //se limpia la pantalla
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
