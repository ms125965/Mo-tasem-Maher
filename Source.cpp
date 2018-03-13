#include "H1.h"

prescription::prescription(){
	id ="";
	numofmed=0;
	for (int q=0 ;q<10 ;q++){
		medlist[q].name="";
		medlist[q].does=0;
		medlist[q].amount=0;
	}
}
prescription::~prescription(){
cout << "good bye"<<endl ;
}
void prescription::setid(string a){
id =a;
}
bool prescription::isEmpty(){
if (numofmed==0)
	return false;
return true;
}
bool prescription::isFull(){
return (!(numofmed==10));
}
int prescription::getLength(){
	return numofmed;
}
void  prescription::insert(medicine m){
	if (isFull()){
		medlist[numofmed].name=m.name;
		medlist[numofmed].does=m.does;
		medlist[numofmed].amount=m.amount;
		numofmed++;
	}
	else 
		cout << "is full "<<endl;
}
void prescription::printWithDose (int a){
	if (isEmpty()){
		for (int q=0 ;q< numofmed;q++){
			if (medlist[q].does==a){
			cout << "name :"<<medlist[q].name << "  ";
			cout << "amount :"<<medlist[q].amount <<"  ";
			cout << "does :"<<medlist[q].does << endl; 
			}
			else 
		 cout << "not found"<<endl;
		}
	}
	else 
		cout << "is Empty"<<endl;	
}
void prescription::minDose(){
	if(isEmpty()){
		int min=medlist[0].does,y=0;
		for (int q=0 ;q<numofmed;q++){
			if (min>=medlist[q].does){
				min=medlist[q].does;
				y=q;
			}
		}
		cout << "medicine name "<<medlist[y].name<<"  ";
		cout << "amount :"<<medlist[y].amount <<"  ";
		cout << "does :"<<medlist[y].does << endl;
	}
	else cout<<"is empty"<<endl;
}

void prescription::changeDose(string a,int s){
	if(isEmpty()){
		for(int q=0;q<numofmed;q++){
			if(a==medlist[q].name){
				medlist[q].does=s;
			}
		}
	}
	else cout<<"is Empty"<<endl;
}
void prescription::split( prescription & a, prescription & s){
	int y =0,x=0;
	if(isEmpty()){
		for(int q=0;q<numofmed;q++){
			if(medlist[q].does<=2){
				a.medlist[y]=medlist[q];
				y++;
				a.numofmed++;
			}
			else {
				s.medlist[x]=medlist[q];
				x++;
				s.numofmed++;
			}
		}
	
	}
	else cout<<"Is empty"<<endl;
}