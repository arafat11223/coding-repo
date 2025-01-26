#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age;
    int phn;
    file=fopen("student.txt","a");
    if(file==NULL)
    {
        printf("file does not open");
    }
    else
    {
        printf("file open successfully");
        for(int i=0;i<3;i++)
        {
            printf("name :" );
            scanf("%s",&name);
            printf("age :");
            scanf("%d", &age);
            printf("phone number:");
            scanf("%d",phn);
            fprintf(file,"%s\t\t %d\t\t %d\n", name,age,phn);
        }
        fclose(file);
    }
}