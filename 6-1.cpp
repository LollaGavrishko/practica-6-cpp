//Написать функцию с одним целым параметром, возвращающую номер
//вызова этой функции (первый вызов возвращает 1, второй — 2, третий
//— 3, и т. д.).
#include <iostream>

using namespace std;
int count=0;
int func(int n){
    count++;
    n=count;
    return n;    
}
int main(){
    int k=func(0);
    cout<<k<<endl;
    int k2=func(1);
    cout<<k2<<endl;
    return 0;
}
