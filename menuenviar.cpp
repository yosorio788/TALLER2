#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;




int main(){

char opcion;
char con;
int i=0,n=250;

int  nota1, 
nota2 ,nota3, suma,promedio;
int j=1,Suma=0,a=50;

int num,cua,Numero,I, x=0,y=1,z=1;

int l,numero,factorial =1;


do{
	cout<<"MENU  PRINCIPAL"<<endl;
	cout<<"1. LEER SECUENCIA DE PALABRAS"<<endl;
    cout<<"2. CICLO IF"<<endl;
    cout<<"3. CICLO WHILE"<<endl;
    cout<<"4. CICLO DO WHILE"<<endl;
    cout<<"5. CICLO FOR"<<endl;
   	cout<<"6. VECTORES"<<endl;
   	cout<<"7. SALIR "<<endl;
	do{ 
		cout<<"\n introduzca una opcion"<<endl;
		fflush(stdin);
		cin>>opcion;
		
	}while(opcion < '1'|| opcion > '7');
	switch(opcion){
		
	case '1':  
    		char palabra1 [10];
	char palabra2 [10];

	
	cout<<"ingrese palabra"<<endl;
	cin>>palabra1;
	cout<<"ingrese palabra"<<endl;
	cin>>palabra2;
	for(int i=9;i>=0;i--){
		cout<<palabra1[i]<<endl; 
	}
	for(int i=9;i>=0;i--){
		cout<<palabra2[i]<<endl; 
	}
	
	

        
        break;
        
        
    case '2':     
		cout<<"ingrese nota 1"<<endl;
		cin>>nota1;
		cout<<"ingrese nota 2"<<endl;
		cin>>nota2;
		cout<<"ingrese nota 3"<<endl;
			cin>>nota3;
				
				
			suma=(nota1+nota2+nota3)/3;
				
				cout<<"el promedio es "<<suma<<endl;
					
				if(suma>=3 && suma<=5){
					cout<<"ES APTO"<<endl;
						
					}else if(suma<3){
						cout<<"no ES APTO"<<endl;
					}
  			break;
		
	  
 case '3':

   do{
	cout<<"\n MENU WHILE"<<endl;
	cout<<"\n 1.numeros pares del 1 al 250 "<<endl;
	cout<<"\n 2.sumar los impares del 1 al 50 "<<endl;
	cout<<"\n 3. salir";
	do{
		cout<<"introduzca una opcion"<<endl;
		fflush(stdin);
		cin>>opcion;
		
	}while(opcion < '1'|| opcion > '3');
	switch(opcion){
		
	case '1':  
    cout<<"MOSTRAR LOS NUMEROS PARES DEL 1 AL 250  "<<endl;
			
				while(i<=n){
						
					cout<<""<<i<<endl;
					i+=2;
			
				}
        break;
        
    case '2':    
     cout<<"SUMAR LOS IMPARES DEL 1 AL 50  "<<endl;
	    while(j<=a){
		     Suma= Suma+j;
		         j+=2;
	         }
	cout<<"el resultado es:"<<Suma<<endl;

  	break;
				    
			}
	}while(opcion != '3');

 break;
				        
	case '4': 
				  
		do{
	
	cout<<"ingresa un numero"<<endl;
	cin>>num;
	
	
	cua = num*num;
	
	 cout<<"Desea introducir otro numero (s/n)?: ";
      fflush( stdin );
      cin>>con;
      
      
}	while ( con != 'n' );
	
	cout<<"el cuadrado del numero es :"<<cua<<endl;
	
	break;
	
	case '5':
		
		do{
	cout<<"CICLOS FOR"<<endl;
	cout<<"1.FACTORIAL DE UN NUMERO"<<endl;
	cout<<"2. SOLUCIONAR SERIA FINONACCI"<<endl;
	cout<<"3.SALIR"<<endl;
	
	do{
		cout<<" introduzca una opcion:"<<endl; 
		fflush(stdin);
		cin>>opcion;
		
	}while(opcion < '1'|| opcion > '3');
	switch(opcion){
		
	case '1':  
	int n,factorial=1;
	
	cout<<"Digite un numero: "<<endl; 
	cin>>n;
	
	for(int i=1;i<=n;i++){
		factorial *= i;
	}
	
	cout<<"\nEl factorial del numero es: "<<factorial<<endl;
	
	
	

    break;
}
/*
    case '2': 
    
        	cout<<"digite el numero de elementos";
        	cin>>Numero;
        	
        	cout<<"1,";
        	for(I=1;I<Numero;I++){
        		z=x+y;
        		x=y;
        		y=z;
        		cout<<" "<<z;
			}
			break;
			}
		*/	
	}while(opcion != '3');
		break;
		
		case '6':
			do{
	cout<<"menu vectores"<<endl;
	cout<<" 1. media de 10 numeros "<<endl;
	cout<<" 2. ingresar 10 palabras e imprimirlas a la inversa "<<endl;
	cout<<" 3. salir"<<endl;
	
	do{
		cout<<" introduzca una opcion :"<<endl; 
		fflush(stdin);
		cin>>opcion; 
		
	}while(opcion < '1'|| opcion > '3');
	switch(opcion){
		
	case '1': 
	
	 float sum, numeros1[10];
  int i;

  sum=0;
  for (i=0;i<10;i++){
    printf("Escriba un numero :");
    scanf("%f",&numeros1[i]);
      }
     
  for(i=0;i<10;i++)
  {
   sum=sum+numeros1[i];
  }
 
  printf("%.2f\n :",sum/10);
        break;
        
    case '2':
    	int e;
	char palabras[20];
	
	for(e=1;e<=10;e++){
		fflush(stdin);
		printf("%c. ingrese las palabras :");
		scanf("%c",&palabras[e]);
	
	}
		
printf("las palabras  a la inversa son:\n");
for(e=10;e>=0;e--){
		while(e>=0){
		printf("%c\n",palabras[e--]);
	}
	printf("%c\n",palabras[e]);
	
}
	    break;    
			}
	}while(opcion != '3');
			
		break;
		
			  			  
	break;    
			}
	}while(opcion != '7');
system("pause");
return 0;	
}  
 
        
