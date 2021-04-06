#include<stdio.h>
int main()
{

    char string1[200]="return 0;";
    char string2[500]="for(i=0;i<=10;i=i+1)";
    char string3[500]="if (a==b) {sum=a+b;}";
    char *fp1;
    printf("Tokenized from a.\n");
    fp1=strtok(string1," ;");
    printf("%s\n",fp1);

    while(fp1!='\0')
    {
        fp1=strtok('\0'," ;");
         printf("%s\n",fp1);
    }
    printf("Tokenized from b.\n");

     char *sec;
    sec=strtok(string2," (=+;<)");
    printf("%s\n",sec);

    while(sec!='\0')
    {
        sec=strtok('\0'," (=+;<)");
         printf("%s\n",sec);
    }
    printf("Tokenized from c.\n");

     char *word;
    word=strtok(string3," (=+){;}");
    printf("%s\n",word);

    while(word!='\0')
    {
        word=strtok('\0'," (=+){;}");
         printf("%s\n",word);
    }

}
