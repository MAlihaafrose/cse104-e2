#include<stdio.h>
#include<string.h>
struct Student{
char name[20];
int id;
int age;
};
int main()
{
    struct Student student1;
    struct Student student2;

    strcpy(student1.name,"Maliha Afrose Rimi");
    student1.age=21;
    student1.id=22201250;

     strcpy(student2.name,"Nusrat Ahmmed Ekra");
    student2.age=22;
    student2.id=22201251;

    printf("student1:\n");
    printf("Name: %s\n",student1.name);
    printf("Age: %d\n",student1.age);
    printf("ID: %d\n",student1.id);


    printf("\nstudent2:\n");
    printf("Name: %s\n",student2.name);
    printf("Age: %d\n",student2.age);
    printf("ID %d\n",student2.id);






    }
