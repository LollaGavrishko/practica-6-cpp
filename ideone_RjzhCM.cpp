#include <iostream> 
using namespace std; 
int n=0; 
int func1(int n) { 
setlocale(LC_ALL, "rus"); 
cout<<"Вывод параметра = "<< n <<endl; 
return 0; 
} 

int func3(int n){ 
func1(n); 
func1(0); 
} 

int func2() { 
int M[10] = {}; 
const int A = -100; 
const int B = 101; 
srand(time(NULL)); 
for(int i = 0; i < 10; i++) { 
M[i] = A + rand() % (B - A + 1); 
cout << " | " << M[i] << " | " ; 
int n = M[i]; 
func3(n); 
} 
} 

int main() { 
func1(0); 
func2(); }
