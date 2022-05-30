#include <iostream>
using namespace std;


int swap(int* a, int* b){
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b;

    return 0;
}

int main(){
    int a = 2;
    int b = 3;

    cout << "a = " << a << ", b = " << b << endl;

    swap(&a,&b);

    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}