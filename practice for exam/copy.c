#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{

    FILE *fp1,*fp2;
    char ch;



    fp1=fopen("MIU.txt","r");


    if(fp1==NULL)
    {
        puts("  CANNOT OPEN FIRST FILE");
        exit(0);
    }

    fp2=fopen("MIU2.txt","w");

    if(fp2==NULL)
    {
        puts("  CANNOT OPEN SECOND FILE");
        fclose(fp1);
        exit(0);
    }

    while(1)
    {
        ch=fgetc(fp1);
        if(ch==EOF) break;
        else fputc(ch,fp2);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}