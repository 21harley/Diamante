#include <iostream>
#include<math.h>
#include<windows.h>
#include<conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void gotoxy(int x,int y){
	
}

int main(int argc, char** argv) {
	unsigned int numero=0;
	unsigned int total=0;
	int cot=1;
	cout<<"Ingrese numero"<<endl;
	cin>>numero;total=numero;
	
	cout<<"El numero ingreso es "<<numero<<endl;
	
	for(int i=1;i<20;i++){	
		if(i<10){

			total=total*i;
			cout<<"\t"<<numero<<"*"<<i<<"="<<total<<endl;
			numero=total;
			
		}else if(i<18){
			
			cot++;
			total=total/cot;
			cout<<"\t"<<numero<<"/"<<cot<<"="<<total<<endl;
			numero=total;
		}	
	}
	
	
	
	
	return 0;
}
