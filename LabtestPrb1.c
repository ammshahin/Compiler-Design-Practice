#include<stdio.h>
#include <string.h>
int main()
{

    char string1[500] = "#ACTTTTTAAA>TAAGAGGATA>TTAA#AAACCTTTAAAA";
    char string2[500] = "TTTTT<AAAACCCCTTTTAAAAACCC##TTTAAAAAAAAA";
    char string3[500] = ">>GGGTTTAAAAACCCTACTACTGGTACAAAAATTTTTTA";
    char string4[500] = ">>AAAAAAAA###TTTTTAAAAA>>AAAAACCCTTTTAAAAA";
    int i,length=0,length2=0,length3=0,length4=0;
    length=strlen(string1);
    length2=strlen(string2);
    length3 = strlen(string3);
    length4 = strlen(string4);
    printf("Length of String1: %d\n", length);
    printf("Length of String2: %d\n", length2);
    printf("Length of String3: %d\n", length3);
    printf("Length of String4: %d\n", length4);


    for(int j=0; string2[j]!='\0'; j++,length++)
    {

        string1[length]=string2[j];

    }


    for(int k=0; string3[k]!='\0'; k++,length++)
    {

        string1[length]=string3[k];

    }

    for(int l=0; string4[l]!='\0'; l++,length++)
    {

        string1[length]=string4[l];

    }
    string1[length]='\0';
    int length5=0;
    length5 = strlen(string1);


    printf("Lenght of Contated String: %d\n",length5);
    printf("Reversed of Contated String:\n");
    strrev(string1);
    puts(string1);
    printf("\n\n");
    strrev(string1);
    printf("Tokenizing The Contated String:\n");

    char *fp1;

    fp1=strtok(string1," #><");
    printf("%s\n",fp1);

    while(fp1!='\0')
    {
        fp1=strtok('\0'," #><");
         printf("%s\n",fp1);
    }




}
