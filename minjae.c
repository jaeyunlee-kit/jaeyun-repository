#include <stdio.h>

struct Person
{
    char name[30];
    int age;
    char phone[15];
};

void Input(struct Person* person);
void Output(struct Person person);

int main(void)
{
    struct Person me;
    Input(&me);
    Output(me);

    return 0;
}

void Input(struct Person* person)
{
    printf("<<< 인적 정보 입력받기 >>>\n");

    printf(">>> 이름 입력 : ");
    scanf("%s", person->name);

    printf(">>> 나이 입력 : ");
    scanf("%d", &(person->age));

    printf(">>> 전화번호 입력 : ");
    scanf("%s", person->phone);
}

void Output(struct Person person)
{
    printf("<<< 인적 정보 출력하기 >>>\n");
    printf("*** 이름 : %s\n", person.name);
    printf("*** 나이 : %d\n", person.age);
    printf("*** 전화번호 : %s\n", person.phone);
}

