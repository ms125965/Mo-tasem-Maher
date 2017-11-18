#include <stdio.h>
#include <iostream>
#include <string>
#include <cctype>
#include<iomanip>
#include<cmath>


using namespace std;
#define PI 3.14159265
//w=Results;
//s==tools 


double calculation (long double number1,string Operations,long double number2);
double  Trigonometric_angles(string Operations,double number1);
double S (string Operations,double number1 );
double Spaces(int type, double rib1,double rib2);
double perimeter(int type,float rib1,float rib2 );
double trapezidal(double rib1,double rib2,double rib3,double rib4);
double triangle(double rib1,double rib2,double rib3);


int main (){
    int type_calculator;
    int form;
    double number5,number6,number7;
    string operations;
    cout<<"Hi in my calculation"<<'\n';
    cout<<"1-tools(for example abs)"<<'\n';
    cout<<"2-Trigonometric_angles"<<'\n';
    cout<<"3-calculation"<<'\n';
    cout<<"4-perimeter"<<'\n';
    cout<<"5-Spaces"<<'\n'<<'\n';
    cout<<"please inter  type calculator  Which need it : ";
    
    int s=1;
   for (int a=0;a<s;a++) { 
       cin>>type_calculator;
    if (type_calculator==2){
        cout<<"operations "<<"    number"<<'\n';
        cin>>operations>>number5;
        cout<<"result = "<< Trigonometric_angles(operations,number5)<<'\n';
    }
    else if (type_calculator==4){
      cout<<"1-circle"<<'\t'<<"2-rectangle"<<'\t'<<"3-square"<<'\n';
      cout<<"4-rhomboid"<<'\t'<<"5-triangle"<<'\t'<<"6-trapezidal"<<'\n';
      cout<<"please inter  form perimeter Which need it : ";
      cin>>form;
        if ((form==4)||(form==3)){
        cout<<"rib = ";       
        number5=4;
        cin>>number6;
        cout<<"perimeter = "<<perimeter(form,number5,number6)<<endl;
        }
        else if (form==1){
       number5=PI;
       cout<<"radius = ";
       cin>>number6;
        cout<<"perimeter = "<<perimeter(form,number5,number6)<<endl;
        }
        else if (form==2){
        cout<<"rib 1"<<"   rib 2"<<'\n';
        cin>>number5>>number6; 
        cout<<"perimeter = "<<perimeter(form,number5,number6)<<endl;
        }
        else if (form==5){
        cout<<"rib 1"<<"   rib 2"<<"   rib 3"<<'\n';
        cin>>number5>>number6;
        cout<<"perimeter = "<<perimeter(form,number5,number6)<<endl;
        }
        else if (form==6){
        cout<<"rib 1"<<"   rib 2"<<"   rib 3"<<"   rib 4"<<'\n';
        cin>>number5>>number6; 
        cout<<"perimeter = "<<perimeter(form,number5,number6)<<endl;
        }
    
        }       
           
    else if(type_calculator ==5){
      cout<<"1-triangle"<<'\t'<<"2-Square"<<'\t'<<"3-rectangle"<<'\n';
      cout<<"4-parallelogram"<<'\t'<<"5-Trapeze"<<'\t'<<"6-Circle"<<'\n';
      cout<<"7-Hatred"<<'\n';
      cout<<"please inter  form Spaces Which need it : ";
      cin>>form;
      if ((form==1)||(form==3)||(form==4)||(form==5)){
      cout<<"rib 1"<<"   rib 2"<<'\n';
      cin>>number5>>number6;
      cout<<"Spaces = "<<Spaces(form,number5,number6)<<endl;
      }
      else if ((form==6)||(form==7)){
          cout<<"radius"<<'\n';
          number5=PI;
          cin>>number6;
          cout<<"Spaces = "<<Spaces(form,number5,number6)<<endl;
         
      }
      else if (form==2){
          cout<<"rib 1"<<'\n';
          cin>>number5;
          number6=number5;
          cout<<"Spaces = "<<Spaces(form,number5,number6)<<endl;
      }
    }
    else if (type_calculator==3){
        cout<<"number1 "<<"operations "<<"     number 2"<<'\n';
        cin>>number5>>operations>>number6;
        cout<<"result = "<<calculation(number5,operations,number6)<<'\n';
    }
    else if (type_calculator==1){
        cout<<"operations "<<"     number"<<'\n';
        cin>>operations>>number5;
        cout<< "result = "<< S (operations,number5)<<'\n';
    }
     char q; 
     cout<<"start another operations T or F ? ";
     cin>>q;
    
     { if ((q=='t')|(q=='T')){
         system("clear");           
    cout<<"Hi in my calculation"<<'\n';
    cout<<"1-tools(for example abs)"<<'\n';
    cout<<"2-Trigonometric_angles"<<'\n';
    cout<<"3-calculation"<<'\n';
    cout<<"4-perimeter"<<'\n';
    cout<<"5-Spaces"<<'\n'<<'\n';
    cout<<"please inter  type calculator  Which need it : ";     
         s+=1;
     }
     else if ((q=='F')|(q=='f')){
         cout<<"Mo'tasem Maher Ahmad Salem "<<'\n';
         break;
     }
     }
     }
    //size
    return 0;
}
double trapezidal(double rib1,double rib2,double rib3,double rib4){
    double w;
    w=rib1+rib2+rib3+rib4;

    return w;
} 

double triangle(double rib1,double rib2,double rib3){
    double w;
    w=rib1+rib2+rib3;

    return w;
} 
double perimeter(int type,float rib1,float rib2 ){
 double w;
 if (type ==1)
     w=rib1*rib2;
 else if (type==2)
     w=2*(rib1+rib2);
 else if (type==3)
     w=rib1*rib2;
 else if (type==4)
     w=rib1*rib2;
 else if (type == 5){
     int rib3;
     cin>>rib3;
   w= triangle( rib1, rib2, rib3);
 }
 else if (type==6){
     int rib3,rib4;
     cin>>rib3>>rib4;
   w= trapezidal(rib1,rib2,rib3,rib4); 
 }
 
 
return w;    
}
double Spaces(int type,double rib1,double rib2){
    double w;
    if (type==1)
        w=(0.5)*rib1*rib2;
    else if (type ==2)
        w=rib1*rib2;
    else if (type==3)
        w=rib1*rib2;
    else if (type ==4)
        w=rib1*rib2;
    else if (type ==5)
        w=(0.5)*rib1*rib2;
    else if (type ==6)
     w=rib1*pow(rib2,2);
     else if (type ==7)
     w=4*rib1*pow(rib2,2);  
 
return w;
}



double calculation (long double number1,string Operations,long double number2)
{
	long double w;
        int number11,number22;

	if (Operations=="+")
		w=number1+number2;
	else if (Operations=="-")
		w=number1-number2;
	else if (Operations=="*")
		w=number1*number2;
	else if (Operations=="/"){
		if (number2!=0)
		w=number1/number2;
	}
	else if (Operations=="%"){
                number11 = static_cast<int>(number1); 
                number22 = static_cast<int>(number2); 

		w=number11 % number22;
	}
	else if (Operations=="^")
		w=pow(number1,number2);
       

        else if (Operations==">"){
            if (number1>number2){
                string i="ture";
                cout<<i<<endl;}
            else {
                string i="false "; 
       
                cout<<i<<endl;}
        }
        else if (Operations=="<"){
            if (number1<number2){
                string i="ture";
          
                cout<<i<<endl;}
            else {
                string i="false "; 
    
                 cout<<i<<endl;
    }   
        }
        else if (Operations==">="){
            if (number1>=number2){
                string w="ture";
                cout<<w<<endl;}
            else {
                string w="false "; 
                cout<<w<<endl;}    
        }
        else if (Operations=="<="){
            if (number1<=number2){
                string w="ture";
                cout<<w<<endl;}
            else {
                string w="false "; 
                cout<<w<<endl;}    
        }
        else if (Operations=="=="){
            if (number1==number2){
                string w="ture";   
                cout<<w<<endl;}
            else {
                string w="false ";     
                cout<<w<<endl;};    
        }
        else if (Operations=="!="){
            if (number1!=number2){
                string w="ture";     
                cout<<w<<endl;}
             else {
                string w="false "; 
                cout<<w<<endl;}
        }
return w;
}

double  Trigonometric_angles(string Operations,double number1){
    double w;
	if (Operations=="sin")
		w = cos ( number1 * PI / 180.0 );
	else if (Operations=="cos")
                w=cos (number1*PI/180);
	else if (Operations=="tan")
		w=(sin (number1*PI/180))/(cos (number1*PI/180));
	else if (Operations=="ses")
		w=1/cos (number1*PI/180);
	else if (Operations=="csc")
		w=1/sin (number1*PI/180);
	else if (Operations=="cot")
		w=(cos (number1*PI/180))/(sin  (number1*PI/180));

return w;
}
double S (string Operations,double number1 ){
    int q;
    long double w;
    if (Operations=="ceil")
        w=ceil(number1);
    else if (Operations=="abs")
        w=abs(number1);
    else if (Operations=="floor")
        w=floor(number1);
    else if (Operations=="log")
        w=log(number1);
    
    return w;
} 





