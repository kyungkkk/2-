#include <iostream>
using namespace std;

int main(){

int M[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int (*ptr)[3]; int *p; int **pt;

ptr = M;
cout << ptr << "\t" << M <<endl;   //M ->M[0]
cout << ptr+1 << "\t" << M+1 << endl;  //M+1 ->[1]
cout << *(ptr+1) << "\t" << ptr[1] << "\t" << *(M+1) << "\t" << M[1] << endl;
cout << **(ptr+1) << "\t"  << **(M+1) << "\t" << *M[1] << "\t" << M[1][0] << endl;

p = M[0];
cout << p << "\t" << M[0] << "\t" << *M << endl;
cout << p+1 << "\t" << M[0]+1 << "\t" << *M+1 << endl;
cout << *(p+1) << "\t" << *(M[0]+1) << "\t" << *(*M+1) << endl; //->M[0][1]

pt = &p; // pt = M; (X)
cout << *pt << "\t" << p << endl;
cout << **pt << "\t" << *p << endl; //->M[0][0]

}
//1.왜 배열포인터를 쓰는가? 위 코드로 예시를 들자면 p,pt 두 개의 변수를 선언하지 않고도 ptr만으로 출력이 가능하니 덜헷갈리며 메모리 자체도 줄일 수 있다.
//2.왜 이중포인터를 쓰는가? 2차원 배열일때 포인터만으로는 주소값밖에 출력을 할 수 없다. 이중포인터를 통해 주소에 정확히 다가가 출력이 가능

