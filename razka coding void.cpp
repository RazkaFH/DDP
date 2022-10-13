#include <iostream>
using namespace std;

void a(string nama){
	cout<<" nama saya adalah "<<nama<<endl;
	
}
int main(){
	string nama;
	for(int i=0;i<10;i++){
	
	getline(cin,nama);
	a(nama);
}
	return 0;
}
