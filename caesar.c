#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<cs50.h>
#include<stdlib.h>

void caesar(string s,int l,int key);

int main (int argc ,char* argv[]  )
{
    int key=0;
    int d=0;
    string plaintext;
    string upper;
    string lower;

    if (argc !=2 ){
    printf("usage: %s key\n",argv[0]);
    return 1;
    }
    else if (argv[1]==NULL){
      printf("usage: %s key\n",argv[0]);
    return 1;
    }
    else{
    int lenght=strlen(argv[1]);
    for (int i=0;i<lenght;i++)
    {
    if(isdigit(argv[1][i])==0)
        d=2;
    }
    if (d==2){
     printf("usage: %s key\n",argv[0]);
     return 1;
    }
    key=atoi(argv[1]);
    plaintext=get_string("plaintext: ");
    int lenght2 =strlen(plaintext);
    caesar(plaintext,lenght2,key);

}
}


void caesar(string s ,int l,int key){
int c[l];
int n,nn;
printf("ciphertext: ");
 for (int i=0;i<=l;i++){
        if (i==l)
        printf("\n");
      if (isupper(s[i])){
      n=(s[i]-'A');
      c[i]= (n + key)%26;
      c[i]=c[i]+65;
      printf("%c",(char)c[i]);
      }
      else if (islower(s[i])){
        nn=(s[i])-'a';
      c[i]= (nn + key)%26;
       c[i]=c[i]+97;
      printf("%c",(char)c[i]);
      }
      else

       printf("%c", s[i]);

 }

}
