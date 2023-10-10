#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *mystrrpl(char *str,char *ch,char *substr)
{
  char *temp1= (char*)calloc(50,sizeof(char));
  char *temp2= (char*)calloc(50,sizeof(char));
  while(NULL!=strstr(str,ch))
{
    temp1=strstr(str,ch);
    strcpy(temp2,temp1);
    *(str+(temp1-str))=0;  
    strcat(str,substr);
    strcat(str,temp2+strlen(ch));
  }
  return str;
}


int main(){
    int *pn,*pm;
    char *str=(char *)calloc(50,sizeof(char));
   char *ch=(char *)calloc(50,sizeof(char));
   char *substr=(char *)calloc(50,sizeof(char));
    printf("Enter String: ");
    scanf("%s",str);
    printf("Enter charecter: ");
    scanf("%s",ch);
    printf("\nEnter SubString: ");
    scanf("%s",substr);
    printf("\nOutput String:%s\n",mystrrpl(str,ch,substr));
    free(str);
    free(ch);
    free(substr);
    return 0;
}
