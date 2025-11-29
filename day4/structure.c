#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[20];
    int sem;
    char branch[20];
    char section;
} ;

void main()
{
    struct student s1, s2;
    s1.id = 1;
    strcpy(s1.name, "nobita");
    strcpy(s1.branch,"CSE");
    s1.sem = 1;
    s1.section = 'c';

    s2.id = 2;
    strcpy(s2.name, "doremon");
    strcpy(s2.branch,"CSE");
    s2.sem = 1;
    s2.section = 'c';

    printf("student 1 details:\n");
    printf("id:%d\n", s1.id); 
    printf("name:%s\n", s1.name);
    printf("sem:%d\n", s1.sem);
    printf("branch:%s\n", s1.branch);
    printf("section:%c\n", s1.section);
    printf("student 2 details:\n");
    printf("id:%d\n", s2.id);       
    printf("name:%s\n", s2.name);
    printf("sem:%d\n", s2.sem);
    printf("branch:%s\n", s2.branch);
    printf("section:%c\n", s2.section); 
                        

}

