#include <iostream>

using namespace std;

int main() {
	

	float tinggi;
	float berat;
	float bmi;
	
	cin>>tinggi;
	cin>>berat;
	
	bmi=berat/(tinggi*tinggi);
	if(bmi<17.0){ 
	
	cout<<"kurus\n";
	} else if(17.0<bmi<18.4){cout<<"kurus,kekurangan berat badan tingkat ringan/n";
	} else if(18.5<bmi<25.0){ cout<<"normal\n";
	}else if (25.1<bmi<27.0){ cout<<"gemuk,kelebihan berat badan tingkat ringan";
	}else if(bmi>27.1){ cout<<"gemuk,kelebihan berat badan tingkat tinggi";
	}
	
	cout<<"bmi : " <<bmi <<endl;
	
	
	
	
}
