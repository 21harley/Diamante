#include <iostream>
#include<math.h>
#include<windows.h>
#include<conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void gotoxy(int x,int y){
	HANDLE hCon;
	hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hCon,dwPos);
}

int main(int argc, char** argv) {
	unsigned long long numero=0,aux=0,total=0;

	int cot=1,c=0,y1=0,res=0;
do{
	cout<<"\n Bienvenido a la mina Airus"<<endl;
	cout<<"\n 1)Resolver diamante"<<endl;
	cout<<"\n 2)salir "<<endl;
	cin>>res;
	switch(res){
		case 1:
	cout<<"Ingrese numero"<<endl;
	cin>>numero;total=numero;
	for(int i=1;i<20;i++){	
		if(i<10){
			total=total*i;numero=total;aux=total;
			do{
				c++;
				aux/=10;
			}while(aux>0);
			
			gotoxy(21-c,3+y1);
			cout<<numero;
			gotoxy(21,3+y1);
			cout<<"*"<<i<<"="<<fixed<<total<<endl;
			numero=total;c=0;aux=0;y1++;
			
		}else if(i<18){
			
			cot++;
			total=total/cot;aux=total;
			do{
				c++;
				aux/=10;
			}while(aux>0);
			
			gotoxy(21-c,3+y1);
			cout<<numero;
			gotoxy(21,3+y1);
			cout<<"/"<<cot<<"="<<fixed<<total<<endl;
			numero=total;c=0;aux=0;y1++;
		}	
	}
		break;
		case 2: a=1;break;
	}
	
}while(a==0);
	return 0;
}
