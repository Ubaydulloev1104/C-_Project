#include <iostream>
#include <string>
using namespace std;
class met_cart{
	private:
	string naz_bol=" ��� ";
	int id_p=0;
	public:
	string fio;
	string data;
	string adres;
	int tel;
	string fio_doc;
	int tel_doc;
	
	void setnaz(string naz){
	naz_bol=naz;
	}
	string getna(){
	return naz_bol;
	 };
	int getid_p(){
	return id_p;
	 };
	 void setid_p(int v){
	 id_p=id_p+v;
	 }; 
	  void met(){ 
	  cout<<"���: "<<fio<<", ���� ��������: "<<data<<", �����: "<<adres<<", �������: "<<tel<<", ��� �������: "<<fio_doc<<", ������� �������: "<<tel_doc<<"."<<endl; 
}
};
int main(int argc, char** argv) {
	setlocale(0,""); 
	met_cart met_cart1;
	met_cart1.setid_p(1);
	cout<<"�������� ��������� :"<<met_cart1.getna()<<endl; 
	cout<<"Id ���.�����: "<<met_cart1.getid_p()<<"."<<endl; 
	met_cart1.fio="���������� �.�.";
	met_cart1.data="11.04.2002";
	met_cart1.adres="��.� �����";
	met_cart1.tel=99999999;
	met_cart1.fio="������� �.�.";
 	met_cart1.tel_doc=99999999;
	met_cart1.met();
	return 0;
};
