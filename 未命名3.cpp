#include<iostream>
using namespace std;
class Horse
{
public:
    Horse ();
	virtual int Fly(); 
	virtual ~Horse(); 
};
Horse :: Horse(){

cout<<"Horse �����˿ռ�..."<<endl;
} 
 int  Horse::Fly ()
{
	cout<<"Just a horse."<<endl; 
}
Horse::~Horse()
{
	cout<<"Horse �ͷ��˿ռ�..."<<endl; 
}
 



class Pegasus:public Horse
{
public :
	 Pegasus(); 
	virtual int Fly();
	
	virtual ~Pegasus();

private :
 
};
Pegasus::Pegasus() 
{
	cout<<"Pegasus �����˿ռ�..."<<endl;
}
int Pegasus ::Fly()
{
	cout<<"I can fly!"<<endl;
}
 Pegasus::~Pegasus() 
{
	cout<<"Pegasus �ͷ��˿ռ�..."<<endl;	
	
} 

int main()
{
    Horse *p1 = new Horse; //�����Horse �����˿ռ�...
    Horse *p2 = new Pegasus; /*  ������У�
                                 Horse �����˿ռ�...
                                 Pegasus �����˿ռ�...   
                     */    
    cout << endl; 
    
    p1->Fly(); //�����Just a horse.
    p2->Fly(); //�����I can fly!
    cout << endl; 
    
    delete p1; //�����Horse �ͷ��˿ռ�...
    delete p2;  /* ������У�
                   Pegasus �ͷ��˿ռ�... 
                   Horse �ͷ��˿ռ�... 
            */
    return 0;
}
