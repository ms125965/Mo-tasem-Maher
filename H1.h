#include <iostream>
#include <string> 

using namespace std ;

struct medicine {
string name ;
int amount ;
int does;
};

class prescription {
private :
   string id ;
   int numofmed;
   medicine medlist[10];
public :
	prescription();
	~prescription();
	void setid(string);
	bool isEmpty ();
	bool isFull ();
	int getLength();
    void print(); 
    void  insert(medicine); 
    void printWithDose (int); 
    void minDose(); 
    void changeDose(string,int);
    void split( prescription &, prescription &); 
};
