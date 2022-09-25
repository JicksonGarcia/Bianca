#include<iostream>
using namespace std;

int main()
{
	int JMGV_i=0,JMGV_l;
	float JMGV_x,JMGV_s=0;
	cout<<"ingrese el limite JMGV_l="; cin>>JMGV_l;
	do{
		
	cout<<"ingrese el numero JMGV_x="; cin>>JMGV_x;
	JMGV_i=JMGV_i+1;
	JMGV_s=JMGV_s+JMGV_x;



	}while(JMGV_i<JMGV_l);
	cout<<"Se ingresaron "<<JMGV_l<<" numeros "<< "que sumaron "<<JMGV_s<<endl;
	return 0;



}
