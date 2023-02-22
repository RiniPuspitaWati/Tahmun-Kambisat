#include <iostream>
using namespace std;
int main(){
	int Tahun;
	cin>>Tahun;
	
	if(Tahun%400==0){
		cout<<"Tahun Kabisat";
	}else if("Tahun%100==0"){
		cout<<"Bukan Tahun Kabisat";
	}else if(Tahun%4==0){
		cout<<"Tahun Kabisat";
		
	}else{
		cout<<"Bukan Tahun Kabisat";
	}
	return 0;
}
