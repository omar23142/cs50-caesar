#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<cs50.h>

int main (int argc ,char* argv[]  )
{
    int d;
    string plaintext;
    int lenght=strlen(argv[1]);
    if (argc !=2 ){
    printf("usage: %s key\n",argv[0]);
    for (int i=0;i<lenght;i++)
    {
    if(isdigit(argv[1][i])==0)
        d=2;
    }
    if (d==2)
     printf("usage: %s key\n",argv[0]);
    }
    else
    plaintext=get_string("plaintext: ");
}

