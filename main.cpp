#include <iostream>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	unsigned int numero=0;
	unsigned int total=0;
	int cot=1;
	cout<<"Ingrese numero"<<endl;
	cin>>numero;total=numero;
	for(int i=1;i<20;i++){
		
		if(i<10){
			total=total*i;
			cout<<total<<endl;
		}else if(i<18){
			cot++;
			total=total/cot;
			cout<<total<<endl;
		}
		
		
	}
	
	
	
	
	return 0;
}
