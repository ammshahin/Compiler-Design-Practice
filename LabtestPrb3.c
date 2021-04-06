#include<stdio.h>
#include<stdlib.h>
void checkLineComment(char);
void LineComment();
FILE *fp1, *fp2;

int main(){

char c,d;
fp1=fopen("input.txt","r");
fp2=fopen("output.txt","w");

    while((c=fgetc(fp1))!=EOF)
    {
        if(c==' ')
        {
            if(d!=' '){

                fputc(c,fp2);
                d='0';
                while((c=fgetc(fp1))==' ')
                {

                }
            }

        }else if(c=='\t')
        {
            while((c=fgetc(fp1))=='\t')
            {

            }
            fputc(c,fp2);

        }
        if(c=='/'){
            d=fgetc(fp1);
            if(d=='/'){
                LineComment();
            }else{

            fputc(c,fp2);
            fputc(d,fp2);

            }
        }
        else{
            fputc(c,fp2);
        }
    }


fclose(fp1);
fclose(fp2);


return 0;
}




void LineComment(){
char e;
while((e=fgetc(fp1))!=EOF){

  if(e=='\n'){
    return;
  }
}  }
