#include <stdio.h>
int main()
{
    int i, *p;
    i = 10;
    printf("value of i = %d\n", i);    // i의 값
    printf("address of i = %p\n", &i); // i의 주소
    printf("value of p = %p\n", p);    //포인터 변수p의 값
    printf("address of p = %p\n", &p); //포인터 p의 주소값
    p = &i;                            // p가 i의 위치를 가리키도록 변경
    printf("\n\n----- after p = &i ------------\n\n");
    printf("value of p = %p\n", p);        // i의 주소
    printf("address of p = %p\n", &p);     //주소는 같고
    printf("dereferencing *p = %d\n", *p); // i의 값이 나옴
    return 0;
}
/*포인터라는게 결국 '필요'해서 만들어진것일텐데 코딩은 팀프로젝트 단위로 움직이므로
협업하는 과정에서 어떤 특정한 변수를 사용할 때 포인터를 이용해 변수를 쉽게 쓰기위한것이라고 하는데
좀 더 활용해봐야 알 것 같다.*/