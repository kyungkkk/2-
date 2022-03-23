#include <iostream>
using namespace std;

int main(){

int arr[6] = {1,2,3,4,5,6};
int *chr_ptr; // 1) int에 대한 포인터 변수 chr_ptr을 선언하는 문장작성
// chr_ptr이 arr 배열이 저장되어 있는메모리 주소값을 갖도록 초기화
chr_ptr = arr;
chr_ptr++; // chr_ptr의 값을 하나 증가
// 3) 옆 문장이 실행되었을 때의결과는?
// 4) 옆 문장이 실행되었을 때의결과는?
// 5) 옆 문장이 실행되었을 때의 결과는?
// 6) 옆 문장이 실행되었을 때의결과는?
// 7) 옆 문장이 실행되었을 때의결과는? ->모르겠어서 그냥 코드실행했습니다. 더 노력해야겠습니다.
cout << chr_ptr << endl;
cout << *chr_ptr << endl;
cout << arr << endl;
cout << arr+4 << endl;
cout << &arr[3] << endl;
cout << arr[4] << endl;
// arr[3]의 값을 chr_ptr을 이용하여 프린트
cout << *chr_ptr+2 << endl;

}