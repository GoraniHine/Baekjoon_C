#include <stdio.h>

struct point
{
    int xpos; //주소값 예시: 0x0000
    int ypos; //주소값 예시: 0x0004
};

struct person
{
    char name[20]; //주소값 예시: 0x2000 ~ 0x2013
    char phoneNum[20]; //주소값 예시: 0x2014 ~ 0x2027
    int age; //주소값 예시: 0x2028
}; // 패딩 바이트가 생길수 있다.

int main(void)
{
    struct point pos = {10, 20};
    struct person man = {"최민식", "010-3514-5835", 25};

    printf("%p %p \n", &pos, &pos.xpos);
    printf("%p %p \n", &man, man.name);

    return 0;
}