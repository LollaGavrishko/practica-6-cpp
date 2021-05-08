//Написать функцию без параметров, возвращающую при каждом
//вызове следующее простое число (первый вызов возвращает 2,
//следующий — 3, третий — 5, и т. д.).

#include <iostream>
#include <cmath>
using namespace std;
int k=2;
bool isPrime(int n){
	for(int i=2; i*i<=n, i++){
		if(n%i==0){
			return false;}}
	return true;
}
int func(){
	while(!isPrime(k)){
		k++;
	}
	k++;
	return k-1;
}
int main(){
	int l=func();
	cout<<l<<endl;
	l=func();
	cout<<l<<endl;
	l=func();
	cout<<l<<endl;
	l=func();
	cout<<l<<endl;
	l=func();
	cout<<l<<endl;
	l=func();
	cout<<l<<endl;
	l=func();
	cout<<l<<endl;
	return 0;
}