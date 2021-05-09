//Написать процедуру без параметров, при первом вызове печатающую
//«Good morning!», при втором — «Good afternoon!», при третьем —
//«Good evening!», при четвертом — снова «Good morning!», и далее по
//циклу.
#include <iostream>

using namespace std;
int count=0;
void func() {

	int k=count%3;
	switch(k){
		case 0:
		cout<<"good morning"<<endl;break;
		case 1:
		cout<<"good afternoon"<<endl;break;
		case 2:
		cout<<"good evening"<<endl;break;
	}
	count++;

}	
int main() {
	func();func();func();func();func(); 
	return 0;
}		
