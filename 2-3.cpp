#include <iostream>
using namespace std;

int main(){
int i1 = 10;
int i2 = 20;
int* const pInt2 = &i1;


*pInt2 = 50;

cout << i1;
}