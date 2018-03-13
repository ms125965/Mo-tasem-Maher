#include "H1.h"

int main (){
	prescription p1;
	medicine v;
	for (int q= 0 ;q<4 ;q++){
		cin >>v.name>>v.does>>v.amount;
	p1.insert(v);
	}
	p1.printWithDose(3);
	p1.minDose();
	prescription p2,p3;
	p1.split(p2,p3);
	cout <<"p2"<<endl;
	p2.print();
	cout << "p3"<<endl;
	p3.print();


	return 0;
}