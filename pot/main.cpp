#include <iostream> 
#include <string> 
using namespace std; 
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */ 
class pot{ 
 public: 
 string fio; 
 string adres;  
 string got_roj; 
 string diagnos;
 string vrach;
 long tel_vrach;
 int nomer_cor; 
 void pot1(){ 
  cout<<"���: "<<fio<<", �����: "<<adres<<", ��� ��������: "<<got_roj<<", �������: "<<diagnos<<", ��� ����: "<<vrach<<", ������� �����: "<<tel_vrach<<", ����� ���.��������: "<<nomer_cor<<"."<<endl; 
 } 
}; 
int main(int argc, char** argv) { 
 setlocale(0,""); 
  pot d; 
 d.fio="����������� �.�"; 
 d.adres="��.� ����� �28"; 
 d.got_roj="11,04,2002 �"; 
 d.diagnos="�������"	;
 d.vrach="������� �.�."; 
 d.tel_vrach=929999999;
 d.nomer_cor=123123;
 d.pot1(); 
 
 return 0; 
}
