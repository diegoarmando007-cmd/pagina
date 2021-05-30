#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

void add();
void sub();
void multi();
void division();
void sqr();
void srt();
void exit();

int main()
{
	//clrscr();
int opr;
	
	do{
		cout<<"Selecciona alguna operacionde la calculadora de c++"<<endl;
		cout<<"1.- Suma "<<endl;
		cout<<"2.- Resta "<<endl;
		cout<<"3- Multiplicacion"<<endl;
		cout<<"4.- Division"<<endl;
		cout<<"5.- El cuadrado de un numero"<<endl;
		cout<<"6.- La raiz cuadrada"<<endl;
		cout<<"7.- Salir"<<endl;
	    cout<<"Toma una decision"<<endl;
		     
		cin>>opr;
		
		switch(opr){
			
			case 1:
				add();
			break;	
			
			case 2:
				sub();
			break;
			
			case 3:
				multi();
			break;
			
			case 4:
				division();
			break;
			
			case 5:
				sqr();
			break;
			
			case 6:
				srt();
			break;
			
			case 7:
				exit(0);
			break;
			
			default:	
			cout<<"Algo esta mal";
			break;
		}
		
		cout<<"\n--------------\n";
		     
		     
		}while(opr == 1,2,3,4,5,6);
		getch ();
	}
	
	void add(){
		int n, sum=0,i, number;
		
		cout<<"Cuantos numeros tu quieres sumar";
		cin>>n;
		
		
		
		for(i = 1; i <= n; i++){
			cout<<"Por favor incresa el numero uno por uno ";
		
		cin>>number;
		sum += number;
		}
		
		cout<<"\n suma de the numeros es; "<<sum;
	}
	
	void sub(){
		int num1, num2, z;
		
		cout<<"\n Ingresa el primer numero";
		cin>>num1;
		
		cout<<"\n Ingresa el segundo numero";
		cin>>num2;
		
		z = num1 - num2;
		
		cout<<"\n La substracion del numero es;"<<z;
    }

   void multi(){
   	int num1, num2, mul;
   	
   	cout<<"\n ingresa el primer numero"<<endl;
   	cin>>num1;
   	
   	cout<<"ingresa el segundo numero"<<endl;
   	cin>>num2;
   	
   	mul = num1 * num2;
   	
   	cout<<"\n La multiplicacion es; "<<mul;
   }
   
   void division(){
   	
   	int num1, num2, div=0;
   	
   	cout<<"\n Ingresa  el primer numero"<<endl;
   	cin>>num1;
   	
   	cout<<"\n ingresa el segundo numero";
   	cin>>num2;
   	
   	while(num2 == 0){
   		cout<<"\n La division no puede ser cero"
   		      "\n Por fvor ingresa el divisor una vez mas ";
				 cin>>num2; 
   	}
   	
   	div = num1 / num2;
   	
   	cout<<"\n La division de los dos numero es; "<<div;
   }
   
   
   void sqr(){
   	
   	int num1;
   	float sq;
   	
   	cout<<"\n Ingresa un numero para encontrar el cuadrado ";
   	cin>>num1;
   	
   	sq *= num1;
   	
   	cout<<"\n El cuadrado de; "<<num1<<" is "<<sq;
   }
   
   void srt(){
   	
   	float q; 
   	int num1;
   	
   	cout<<"\n Ingresa el numero para encontrar la riz cuadrada";
   	cin>>num1;
   	
   	q = sqrt(num1);
   	
   	cout<<"\n La raiz cuadrada de; "<<num1<<" es "<<q;
   }

		     
		
	

