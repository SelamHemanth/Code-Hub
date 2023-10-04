#include<stdio.h>
#include<string.h>
char *myItoA(int *);
int main(){
    int a=1923;
    printf("ItoA:%s",myItoA(&a));
    return 0;
}

char *myItoA(int *num){
    int rand;
    static char str[100]; 
    int i=0,c=0,temp;
    temp=*num;
    while(temp!=0){
        c++;
        temp/=10;
    }
    for(i=0;i<c;i++){
        rand = *num%10;
        str[i]=(rand+48);
        *num/=10;       
    }
    str[i]='\0';
    strrev(str);
    return str;
}
