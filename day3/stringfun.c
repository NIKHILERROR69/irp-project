#include<stdio.h>
#include<string.h>
void main()
{
    char fname[20],lname[20], fullname[20], copyname[20];

    printf("Enter your first name: ");
    fgets(fname,sizeof(fname),stdin);
    fname[(strcspn(fname,"p"))]=0;
    printf("Your first name is %s\n", fname);

    printf("Enter your last name: ");
    fgets(lname,sizeof(lname),stdin);
    printf("Your last name is %s\n", lname);
    //using of null character
    fullname[0] = '\0';

    strcat(fullname,fname);
    strcat(fullname,"  ");
    strcat(fullname,lname);

  printf("Your full name is: %s\n", fullname);

     // string length

     printf("Your name contains %d characters\n", strlen(fullname));
     strcpy(copyname, fullname);
     printf("Copied name: %s", copyname);

}
