#include<stdio.h>

int main()
{
        char str1[20], str2[20];
        int i=0, c=0;

        printf("\nEnter first string :: ");
        gets(str1);
        printf("\nEnter second string :: ");
        gets(str2);

        printf("\nStrings are :: \n\n");
       puts(str1);
       puts(str2);

        while((str1[i]!='\0') || (str2[i]!='\0'))
    {
                if(str1[i]!=str2[i])
                        c++;
                i++;
        }

        if(c==0)
                puts("\nStrings are Same.\n");
        else
                puts("\nStrings are not Same.\n");

        return 0;
}
