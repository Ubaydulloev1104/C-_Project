#include <iostream>
#include <string>
using namespace std;

class sotrutnic{
	public:
	string Fio;
	int Id;
	string dolj;
	string adel;
	
	void printinfo(){
		cout<<"���: "<<Fio<<", Id: "<<Id<<", ��������:"<<dolj<<",�����: "<<adel<<endl; 
	}	
};
class Vrach:public sotrutnic{
	public:
	string sp;
	string adres;
	int tel;
	void printinfo(){
		sotrutnic::printinfo();
		cout<<"������������: "<<sp<<", �����: "<<adres<<", �������:"<<tel<<endl;
	}
};

int main(int argc, char** argv){
	setlocale(0,"");
	Vrach v;
	v.Fio="����������� �.�.";
	v.Id=12345;
	v.dolj="����";
	v.adel="a1";
	v.sp="������";
	v.adres="�.��������";
	v.tel=7777777;
	v.printinfo();
	return 0;
}
