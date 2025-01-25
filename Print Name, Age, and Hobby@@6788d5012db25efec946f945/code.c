#include <stdio.h>


int main() {
    char name[100],int age,char hobby[100];
    scanf("%99s %d\n",&name,&age);
    scanf("%99s",&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}